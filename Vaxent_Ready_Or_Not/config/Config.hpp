#pragma once
#include "../ext/imgui.h"
#include "../ext/imgui_impl_dx11.h"
#include "../ext/imgui_impl_win32.h"
#include "../ext/json.h"



namespace Config {

	namespace Aim_Weapon {
		inline bool enabled = false; 
		inline bool fov = false; 
		inline float fov_value = 5.f;
		inline float smooth = 1;



	}
	namespace Menu {
		inline bool open = false;
		inline ImFont* rubik_fonts;
	}

	namespace Esp {
		inline bool enable = false;

		namespace Suspect {

			inline bool Enable = false;
			inline bool Box = false;
			inline ImColor BoxColor = { 255,187,0 };

			inline bool StatusBoxColor = false;
			inline ImColor BoxColor_Surrender = { 0,175,12 };
			inline ImColor BoxColor_FakeSurrender = { 255,187,0 };
			inline ImColor BoxColor_PlayDead = { 255,206,156};
			inline bool CanTarget = false;
			inline ImColor BoxColor_CanTarget = { 182 ,0,0 };

			inline bool Skeleton = false;


		}

		namespace Civilian {
			inline bool Enable = false;

			inline bool Box = false;
			inline ImColor BoxColor = { 0,255,0 };

			inline bool StatusBoxColor = false;
			inline ImColor BoxColor_Surrender = { 1,152,41};

			inline bool Skeleton = false;


		}

		namespace SWAT {
			inline bool Enable = false;
			inline bool Box = false;
			inline ImColor BoxColor = { 0,0,255 };

			inline bool Skeleton = false;



		}
		/*
		inline bool SWAT_Box = false;
		inline float boxcolor_SWAT[3] = { 255.f,255.f,255.f };



		





		inline bool fovaimbot = false;
		inline float fovaimbotcolor[3] = { 255.f,255.f,255.f };

		inline bool targetline = false;
		inline float targetlinecolor[3] = { 255.f,255.f,255.f };

		*/
	}

	namespace Misc {
		inline bool streamproof = false;
		namespace Crosshair {
			inline bool enable = false;
			inline float sizeX = 5;
			inline float sizeY = 5;
			inline float OffsetPosX = 0;
			inline float OffsetPosY = 0;
			inline float TrickNess = 1;
			inline ImColor Color = { 255,255,255 };
		}
		inline float fov = 120;
		inline bool AutoHealth = false;

		namespace Fun {
			inline bool hitmarker = false;
			inline ImColor hitmarker_color = { 255,255,255 };

		}
	}
}