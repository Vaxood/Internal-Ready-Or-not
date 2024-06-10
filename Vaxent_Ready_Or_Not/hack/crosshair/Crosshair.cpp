#include "Crosshair.h"
#include "../../config/Config.hpp"

void Crosshair::Do() noexcept {
	if (Config::Misc::Crosshair::enable)
	{
	//	ImGui::GetBackgroundDrawList()->AddLine(ImVec2((1920 / 2) - 5, 1080 / 2), ImVec2((1920 / 2) + 5, 1080 / 2), ImColor(255,255,255), 1);

		ImGui::GetBackgroundDrawList()->AddLine(
			{( (1920 / 2) - Config::Misc::Crosshair::sizeX +Config::Misc::Crosshair::OffsetPosX	),(1080 / 2) + Config::Misc::Crosshair::OffsetPosY },
			{( (1920 / 2) + Config::Misc::Crosshair::sizeX+ Config::Misc::Crosshair::OffsetPosX),(1080 / 2)  + Config::Misc::Crosshair::OffsetPosY },
			Config::Misc::Crosshair::Color,
			Config::Misc::Crosshair::TrickNess
		);
		ImGui::GetBackgroundDrawList()->AddLine({ (1920 / 2) + Config::Misc::Crosshair::OffsetPosX,(1080 / 2) - Config::Misc::Crosshair::sizeY + Config::Misc::Crosshair::OffsetPosY}, { (1920 / 2) + Config::Misc::Crosshair::OffsetPosX,(1080 / 2) + Config::Misc::Crosshair::sizeY+ Config::Misc::Crosshair::OffsetPosY }, Config::Misc::Crosshair::Color, Config::Misc::Crosshair::TrickNess);

	//	ImGui::GetBackgroundDrawList()->AddLine(ImVec2((1920 / 2), (1080 / 2) - 5), ImVec2((1920 / 2), (1080 / 2) + 5), ImColor(255,255, 255), 1);


	}
	


}