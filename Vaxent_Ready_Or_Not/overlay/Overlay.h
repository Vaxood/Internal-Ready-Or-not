#pragma once
#include <Windows.h>
#include <d3d11.h>

namespace Overlay {
		

    struct TargetWindow {
        DWORD PID;
        HWND hwnd;
        HANDLE handle;

        int WindowWidth,
            WindowHeight,
            WindowLeft,
            WindowRight,
            WindowTop,
            WindowBottom;

        LPCSTR Title;
        LPCSTR ClassName;
        LPCSTR Path;
        WNDPROC WndProc;
    };

    inline TargetWindow targetwindow{};
    inline MSG Message = { 0 };

    inline static ID3D11Device* g_pd3dDevice = NULL;
    inline static ID3D11DeviceContext* g_pd3dDeviceContext = NULL;
    inline static IDXGISwapChain* g_pSwapChain = NULL;
    inline static ID3D11RenderTargetView* g_mainRenderTargetView = NULL;
    inline HWND window = nullptr;
    inline HWND game = nullptr;
    inline WNDCLASSEXA wc{};
    inline HWND GameWindow = nullptr;


	void CreateVWindow() noexcept;
	void DestroyVWindow() noexcept;

	void CreateDeviceAndSwapChain() noexcept;
	void CreateRenderTarget() noexcept;
    void CleanupRenderTarget() noexcept;
    void CleanupDeviceD3D()noexcept;

    void CreateImGui() noexcept;
    void CleanupImGui() noexcept;

    void Render() noexcept;
    void BeginRender(RECT OldRect) noexcept;
    void EndRender() noexcept;


    void SetWindowTarget() noexcept;



}

