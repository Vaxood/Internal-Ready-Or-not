#pragma once
#include <Windows.h>

#include "../../ext/imgui.h"
#include "../../ext/imgui_impl_dx11.h"
#include "../../ext/imgui_impl_win32.h"
namespace Menu {
	void Render(HWND window) noexcept;
	void BeginChildImGui(const char* name, ImVec2 size)noexcept;
	void EndChildImGui() noexcept;

}

