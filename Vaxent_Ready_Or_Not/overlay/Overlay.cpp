#include "Overlay.h"
#include "../ext/imgui.h"
#include "../ext/imgui_impl_dx11.h"
#include "../ext/imgui_impl_win32.h"
#include "../hack/menu/Menu.h"
#include "../hack/esp/Esp.h"
#include "../hack/crosshair/Crosshair.h"
#include "../hack/misc/misc.h"
#include "../config/config.hpp"
#include "../resource/fonts.h"
#include "../hack/weaponhack/WeaponHack.h"
#include <dwmapi.h>
#include <iostream>
#include <Psapi.h>
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);


LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{


    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (Overlay::g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            Overlay::CleanupRenderTarget();
            Overlay::g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
            Overlay::CreateRenderTarget();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
    
        return 0;
    case WM_KILLFOCUS:

        if (Config::Menu::open)
            std::cout << msg << std::endl;
    }
   
/*
    if (Config::Menu::open)
        std::cout << msg << std::endl;
        */
    return ::DefWindowProc(hWnd, msg, wParam, lParam);
}

HWND OurHWND = 0;
DWORD procID;
BOOL CALLBACK OurEnumWindow(HWND hwnd, LPARAM lPram) {

    GetWindowThreadProcessId(hwnd, &procID);
    if (procID == GetCurrentProcessId()) {
        OurHWND = hwnd;
        return FALSE;
    }
    else {
        return true;
    }
}

void Overlay::CreateVWindow() noexcept
{


    wc.cbSize = sizeof(WNDCLASSEXA);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = WndProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = "External Cheat";


    EnumWindows(OurEnumWindow, 0);
    game = OurHWND;
  




    RegisterClassExA(&wc);
    window = CreateWindowExA(WS_EX_TOPMOST | WS_EX_TOOLWINDOW | WS_EX_LAYERED | WS_EX_TRANSPARENT, wc.lpszClassName, "Dear ImGui DirectX11 Example", WS_POPUP, 100, 100, 1920, 1080, 0, 0, wc.hInstance, NULL);
    SetLayeredWindowAttributes(window, RGB(0, 0, 0), BYTE(255), LWA_ALPHA);
    
  //  SetWindowDisplayAffinity(window, WDA_EXCLUDEFROMCAPTURE);




    // SetWindowDisplayAffinity(window, WDA_EXCLUDEFROMCAPTURE);
    {   
        RECT client_area{};
        GetClientRect(window, &client_area);

        RECT window_area{};
        GetWindowRect(window, &window_area);
        POINT diff{};
        ClientToScreen(window, &diff);
        const MARGINS margin = {
            window_area.left + (diff.x - window_area.left),
            window_area.top + (diff.y - window_area.top),
            client_area.right,
            client_area.bottom
        };

        DwmExtendFrameIntoClientArea(window, &margin);

    }
    CreateDeviceAndSwapChain();


    //  SetLayeredWindowAttributes(window, RGB(0, 0, 0), 0, LWA_ALPHA);
     // SetLayeredWindowAttributes(window, RGB(0, 0, 0), 0, LWA_COLORKEY);
    ::ShowWindow(window, SW_SHOWNORMAL);
    ::UpdateWindow(window);

   
}

void Overlay::DestroyVWindow() noexcept
{
    DestroyWindow(window);
    UnregisterClassA(wc.lpszClassName, wc.hInstance);

}

void Overlay::CreateDeviceAndSwapChain() noexcept
{

    DXGI_SWAP_CHAIN_DESC sd{};
    sd.BufferDesc.RefreshRate.Numerator = 60U;
    sd.BufferDesc.RefreshRate.Denominator = 1U;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.SampleDesc.Count = 1U;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.BufferCount = 2U;
    sd.OutputWindow = window;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    constexpr D3D_FEATURE_LEVEL feature_level[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0 };

    D3D_FEATURE_LEVEL level{};

    D3D11CreateDeviceAndSwapChain(
        nullptr,
        D3D_DRIVER_TYPE_HARDWARE,
        nullptr,
        0U,
        feature_level,
        2U,
        D3D11_SDK_VERSION,
        &sd,
        &g_pSwapChain,
        &g_pd3dDevice,
        &level,
        &g_pd3dDeviceContext
    );
    //back buffer 
    ID3D11Texture2D* back_buffer = { nullptr };
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&back_buffer));
    if (back_buffer)
    {
        g_pd3dDevice->CreateRenderTargetView(back_buffer, nullptr, &g_mainRenderTargetView);

    }
    else
    {
        return;
    }

}

void Overlay::CreateRenderTarget() noexcept
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
    pBackBuffer->Release();

}

void Overlay::CleanupRenderTarget() noexcept
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }

}

void Overlay::CleanupDeviceD3D()noexcept
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }

}

void Overlay::CreateImGui() noexcept
{

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui::StyleColorsDark();
    ImGui_ImplWin32_Init(window);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.13f, 1.00f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.13f, 0.13f, 0.16f, 0.20f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.12f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.24f, 0.24f, 0.30f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.24f, 0.24f, 0.30f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.24f, 0.24f, 0.30f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.29f, 0.37f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.21f, 0.22f, 0.29f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.21f, 0.22f, 0.29f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.23f, 0.24f, 0.30f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.16f, 0.16f, 0.21f, 1.00f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.16f, 0.16f, 0.21f, 1.00f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.16f, 0.16f, 0.21f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_Tab] = ImVec4(0.13f, 0.13f, 0.16f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.18f, 0.18f, 0.24f, 1.00f);
    colors[ImGuiCol_TabActive] = ImVec4(0.18f, 0.18f, 0.23f, 1.00f);
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
    colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TableHeaderBg] = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
    colors[ImGuiCol_TableBorderStrong] = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
    colors[ImGuiCol_TableBorderLight] = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
    colors[ImGuiCol_TableRowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);





    ImGui::GetStyle().TabRounding = 2;
    ImGui::GetStyle().WindowTitleAlign = { 0.5,0.5 };
    ImGui::GetStyle().TabBarBorderSize = 2;
    Config::Menu::rubik_fonts = ImGui::GetIO().Fonts->AddFontFromMemoryTTF(&rubikfonts, sizeof rubikfonts, 17);

}

void Overlay::CleanupImGui() noexcept
{
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

}



void Overlay::Render() noexcept
{
    WeaponHack::DoLaserBeam();
    Esp::Do();
    Crosshair::Do();
    Misc::DoRender();
    Menu::Render(window);
  
}

void Overlay::BeginRender(RECT OldRect) noexcept
{
  
    if (PeekMessage(&Message, window, 0, 0, PM_REMOVE)) {
        TranslateMessage(&Message);
        DispatchMessage(&Message);
    }
    HWND ForegroundWindow = GetForegroundWindow();
    if (ForegroundWindow == targetwindow.hwnd) {
     
        HWND TempProcessHwnd = GetWindow(targetwindow.hwnd, GW_HWNDPREV);
        SetWindowPos(window, TempProcessHwnd, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
    }

    RECT TempRect;
    POINT TempPoint;
    ZeroMemory(&TempRect, sizeof(RECT));
    ZeroMemory(&TempPoint, sizeof(POINT));

    GetClientRect(targetwindow.hwnd, &TempRect);
    ClientToScreen(targetwindow.hwnd, &TempPoint);

    TempRect.left = TempPoint.x;
    TempRect.top = TempPoint.y;
    ImGuiIO& io = ImGui::GetIO();
    //io.ImeWindowHandle = targetwindow.hwnd;

    if (TempRect.left != OldRect.left || TempRect.right != OldRect.right || TempRect.top != OldRect.top || TempRect.bottom != OldRect.bottom) {
        OldRect = TempRect;
        targetwindow.WindowWidth = TempRect.right;
        targetwindow.WindowHeight = TempRect.bottom;
        //   DirectX11.dxgiParameters.width = targetwindow.WindowWidth;
          // DirectX11.dxgiParameters.height = targetwindow.WindowHeight;
        SetWindowPos(window, (HWND)0, TempPoint.x, TempPoint.y, targetwindow.WindowWidth, targetwindow.WindowHeight, SWP_NOREDRAW);
        // DirectX11.pDevice->ResetDevice(&DirectX11.dxgiParameters);
    }




    MoveWindow(window, TempRect.left, TempRect.top, TempRect.right - TempRect.left, TempRect.bottom - TempRect.top, true);

    MSG msg;
    while (::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
    {

        ::TranslateMessage(&msg);
        ::DispatchMessage(&msg);
        if (msg.message == WM_QUIT);
        //  running = false;
    }

    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
    Render();
    EndRender();


}

void Overlay::EndRender() noexcept
{
    ImGui::Render();
    constexpr float color[4] = { 0.0f, 0.0f, 0.0f, 0.0f };
    g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, nullptr);
    g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, color);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    g_pSwapChain->Present(1, 0);

}

void Overlay::SetWindowTarget() noexcept
{

    targetwindow.PID = GetCurrentProcessId();
    targetwindow.handle = GetModuleHandle(0);
    targetwindow.hwnd = OurHWND;

    RECT TempRect;
    GetWindowRect(targetwindow.hwnd, &TempRect);
    targetwindow.WindowWidth = TempRect.right - TempRect.left;
    targetwindow.WindowHeight = TempRect.bottom - TempRect.top;
    targetwindow.WindowLeft = TempRect.left;
    targetwindow.WindowRight = TempRect.right;
    targetwindow.WindowTop = TempRect.top;
    targetwindow.WindowBottom = TempRect.bottom;

    char TempTitle[MAX_PATH];
    GetWindowText(targetwindow.hwnd, TempTitle, sizeof(TempTitle));
    targetwindow.Title = TempTitle;

    char TempClassName[MAX_PATH];
    GetClassName(targetwindow.hwnd, TempClassName, sizeof(TempClassName));
    targetwindow.ClassName = TempClassName;

    char TempPath[MAX_PATH];
    GetModuleFileNameEx(targetwindow.hwnd, NULL, TempPath, sizeof(TempPath));
    targetwindow.Path = TempPath;
}


