#include <Windows.h>
#include <iostream>
#include "overlay/Overlay.h"
#include "config/Config.hpp"
#include "hack/esp/Esp.h"
#pragma comment(lib, "d3d11.lib")
#include "utils/Utils.h"
#include "ext/minhook/minhook.h"
#include "hack/weaponhack/WeaponHack.h"
#include "hack/misc/misc.h"
bool cursor = false;




DWORD Setup(const LPVOID lparams)
{
	MH_Initialize();
	

	Overlay::CreateVWindow();
	Overlay::CreateImGui();


	while (true)
	{
		if (GetAsyncKeyState(VK_END))
		{
			goto Unload;
			break;
		}
		if (GetForegroundWindow() == Overlay::game)
		{
			Overlay::SetWindowTarget();
			break;
		}
		Sleep(100);

	}
	FILE* file;
	AllocConsole();
	freopen_s(&file, "CONOUT$", "w", stdout);
	SetConsoleTitle("VVV");
	static RECT OldRect;
	DWORD aff;
	// main looop;
	Utils::Init(false);
	MH_EnableHook(MH_ALL_HOOKS);
	cursor = Utils::GetPlayerController()->bShowMouseCursor;
	Beep(300, 500);
	
	while (!GetAsyncKeyState(VK_END)) {
	
		HWND forwardwin = GetForegroundWindow();
		if (Config::Menu::open && (forwardwin == Overlay::targetwindow.hwnd))
		{

			SetForegroundWindow(Overlay::window);
		}


		GetWindowDisplayAffinity(Overlay::window, &aff);
		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			if ((forwardwin != Overlay::targetwindow.hwnd) && !Config::Menu::open)
				continue;
			Config::Menu::open = !Config::Menu::open;

			if (Config::Menu::open )
			{
				cursor = Utils::GetPlayerController()->bShowMouseCursor;

				Utils::GetPlayerController()->bShowMouseCursor = false;

				SetForegroundWindow(Overlay::window);
				SetWindowLongPtr(Overlay::window, GWL_EXSTYLE, WS_EX_TOPMOST | WS_EX_TOOLWINDOW | WS_EX_LAYERED);

			}
			else
			{

				Utils::GetPlayerController()->bShowMouseCursor = cursor;
			
				SetForegroundWindow(Overlay::targetwindow.hwnd);

				SetWindowLongPtr(Overlay::window, GWL_EXSTYLE, WS_EX_TOPMOST | WS_EX_TOOLWINDOW | WS_EX_TRANSPARENT | WS_EX_LAYERED);


			}
		}

		
		if (Config::Misc::streamproof && aff != WDA_EXCLUDEFROMCAPTURE)
		{

			SetWindowDisplayAffinity(Overlay::window, WDA_EXCLUDEFROMCAPTURE);


		}
		else if (!Config::Misc::streamproof && aff != WDA_NONE)
		{

			SetWindowDisplayAffinity(Overlay::window, WDA_NONE);

		}

		Overlay::BeginRender(OldRect);
		//Utils::Refresh();

		WeaponHack::DoNoRecoil();
		WeaponHack::DoInfiniteAmmo();
		Misc::Do();
	}

	Unload:

	Beep(300, 500);
	MH_DisableHook(MH_ALL_HOOKS);
	MH_Uninitialize();
	Overlay::DestroyVWindow();

	FreeConsole();
	FreeLibraryAndExitThread((HMODULE)lparams, EXIT_SUCCESS);


	return EXIT_SUCCESS;
}




BOOL WINAPI DllMain(const HMODULE instance, const DWORD reason, const void* reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(instance);
		if (auto thread = CreateThread(NULL, NULL, Setup, instance, NULL, NULL))
		{
			CloseHandle(thread);
		}




	}


	return TRUE;
}