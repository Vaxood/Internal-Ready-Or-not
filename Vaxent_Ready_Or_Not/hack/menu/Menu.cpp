#include "Menu.h"

#include "../../config/Config.hpp"
#include "../../sdk/SDK.hpp"

void Menu::BeginChildImGui(const char* name, ImVec2 size) noexcept
{
    ImGui::BeginChild(name, size, ImGuiChildFlags_Border, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
  //  ImGui::PushFont((ImFont*)Config::Menu::rubik_fonts);
    ImGui::Text(name);
   // ImGui::PopFont();
    ImGui::SetCursorPosX(0);

    ImGui::BeginChild(name, size, ImGuiChildFlags_Border, ImGuiWindowFlags_NoScrollbar);




}

void Menu::EndChildImGui() noexcept
{
    ImGui::EndChild();
    ImGui::EndChild();
}
void Menu::Render(HWND window) noexcept {

	ImGui::SetNextWindowSize({ 900,600 });
    
	if (Config::Menu::open)
	{
        ImGui::PushFont(Config::Menu::rubik_fonts);
		ImGui::Begin("Vaxent Internal Ready Or Not", nullptr, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse);
        if (ImGui::BeginTabBar("tab"))
        {
            if (ImGui::BeginTabItem("Aimbot"))
            {

                BeginChildImGui("Aimbot", { 450,300 });
                //  ImGui::GetBackgroundDrawList()->AddRect(ImGui::GetWindowPos(), {200,200}, ImColor(1, 1, 1, 200), 0.f, 0);
                ImGui::Checkbox("Enabled", &Config::Aim_Weapon::enabled);
                ImGui::SliderFloat("FOV", &Config::Aim_Weapon::fov_value, 0, 1000, "%.1f");
                ImGui::SliderFloat("Smooth", &Config::Aim_Weapon::smooth, 1, 20, "%.1f");


                EndChildImGui();


                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("ESP"))
            {
                ImGui::Checkbox("Enable ESP", &Config::Esp::enable);

                BeginChildImGui("Suspect ESP", ImVec2(430, 250));
                {



                    ImGui::Checkbox("Enable", &Config::Esp::Suspect::Enable);

                    {
                        ImGui::Checkbox("Box", &Config::Esp::Suspect::Box);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("Suspect ESP",(float*) & Config::Esp::Suspect::BoxColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview | ImGuiColorEditFlags_Uint8);

                    }
                    {
                        ImGui::Checkbox("Box Status Color", &Config::Esp::Suspect::StatusBoxColor);
                        ImGui::SameLine();

                        ImGui::ColorEdit3("Suspect ESP Surrender", (float*)&Config::Esp::Suspect::BoxColor_Surrender, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("Suspect ESP PlayDead", (float*)&Config::Esp::Suspect::BoxColor_PlayDead, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("Suspect ESP Fake Surrender", (float*)&Config::Esp::Suspect::BoxColor_FakeSurrender, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                        ImGui::Checkbox("Box Color Can Target", &Config::Esp::Suspect::CanTarget);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("Suspect Can Target Color", (float*)&Config::Esp::Suspect::BoxColor_CanTarget, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);

                    }
                    ImGui::Checkbox("Skeleton", &Config::Esp::Suspect::Skeleton);


                }
                EndChildImGui();
                ImGui::SetCursorPos(ImVec2(8, 345));

                BeginChildImGui("Civilian ESP", ImVec2(430, 250));
                {
                    ImGui::Checkbox("Enable", &Config::Esp::Civilian::Enable);

                    {
                        ImGui::Checkbox("Box", &Config::Esp::Civilian::Box);
                        ImGui::SameLine();

                        ImGui::ColorEdit3("Civilian ESP", (float*)&Config::Esp::Civilian::BoxColor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                    }


                    {

                        ImGui::Checkbox("Box Status Color", &Config::Esp::Civilian::StatusBoxColor);
                        ImGui::SameLine();
                        ImGui::ColorEdit3("Civilian ESP Surrender", (float*)&Config::Esp::Civilian::BoxColor_Surrender, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                    }
                    ImGui::Checkbox("Skeleton", &Config::Esp::Civilian::Skeleton);

                }
                EndChildImGui();


                ImGui::SetCursorPos(ImVec2(450, 85));

                BeginChildImGui("SWAT ESP", ImVec2(430, 250));
                {

                    ImGui::Checkbox("Enable", &Config::Esp::SWAT::Enable);
                    ImGui::Checkbox("Box", &Config::Esp::SWAT::Box);

                    ImGui::Checkbox("Skeleton", &Config::Esp::SWAT::Skeleton);

                }
                EndChildImGui();


                /*
                ImGui::Checkbox("SWAT ESP", &Config::Esp::SWAT_Box);
                ImGui::SameLine();
                ImGui::ColorEdit3("Color", (float*)&Config::Esp::boxcolor_SWAT, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
             


                ImGui::Checkbox("Civilian ESP", &Config::Esp::Civilien_Box);
                ImGui::SameLine();
                ImGui::ColorEdit3("Civilian ESP", (float*)&Config::Esp::boxcolor_Civilien, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                ImGui::SameLine();
                ImGui::ColorEdit3("Civilian ESP Surrender", (float*)&Config::Esp::boxcolor_Civilien_Surrender, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);

                ImGui::Checkbox("Suspect ESP", &Config::Esp::Suspect_Box);
                ImGui::SameLine();
                ImGui::ColorEdit3("Suspect ESP", (float*)&Config::Esp::boxcolor_Suspect, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                ImGui::SameLine();
                ImGui::ColorEdit3("Suspect ESP Surrender", (float*)&Config::Esp::boxcolor_Suspect_Surrender, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                ImGui::SameLine();
                ImGui::ColorEdit3("Suspect ESP PlayDead", (float*)&Config::Esp::boxcolor_Suspect_PlayDead, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);
                ImGui::SameLine();

                ImGui::ColorEdit3("Suspect ESP Fake Surrender", (float*)&Config::Esp::boxcolor_Suspect_FakeSurrender, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);




                /*
                ImGui::Checkbox("FOV", &Config::Esp::fovaimbot);
                ImGui::SameLine();
                ImGui::ColorEdit3("FOV Color", (float*)&Config::Esp::fovaimbotcolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);

                ImGui::Checkbox("Target Line", &Config::Esp::targetline);
                ImGui::SameLine();
                ImGui::ColorEdit3("Target Line Color", (float*)&Config::Esp::targetlinecolor, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);

                */

                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Misc"))
            {

                ImGui::SetCursorPos(ImVec2(8, 68));

                BeginChildImGui("Fun", ImVec2(430, 250));
                {
                    ImGui::Checkbox("HitMarker", &Config::Misc::Fun::hitmarker);
                    ImGui::SameLine();
                    ImGui::ColorEdit3("Target Line Color", (float*)&Config::Misc::Fun::hitmarker_color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);





                }
                EndChildImGui();
                ImGui::SetCursorPos(ImVec2(8, 330));

                BeginChildImGui("Other", ImVec2(430, 250));
                {
                    ImGui::Checkbox("StreamProof", &Config::Misc::streamproof);
                    ImGui::Checkbox("Auto-Health", &Config::Misc::AutoHealth);
            
                }
                EndChildImGui();


                ImGui::SetCursorPos(ImVec2(450, 68));

                BeginChildImGui("Crosshair", ImVec2(430, 250));
                {
                    ImGui::Checkbox("Enable", &Config::Misc::Crosshair::enable); 
                    ImGui::SameLine();
                    ImGui::ColorEdit3("Color Crosshair", (float*)&Config::Misc::Crosshair::Color, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_NoSidePreview);

                    ImGui::SliderFloat("Size Weight ", &Config::Misc::Crosshair::sizeX, 1, 50,"%.1f");
                    ImGui::SliderFloat("Size Height ", &Config::Misc::Crosshair::sizeY, 1, 50, "%.1f");
                    ImGui::SliderFloat("Offset Pos X ", &Config::Misc::Crosshair::OffsetPosX, -960, 960, "%.1f");
                    ImGui::SliderFloat("Offset Pos Y ", &Config::Misc::Crosshair::OffsetPosY, -540, 540, "%.1f");
                    ImGui::SliderFloat("Thickness", &Config::Misc::Crosshair::TrickNess, 1, 50, "%.1f");
                    if (ImGui::Button("Reset Crosshair"))
                    {
                        Config::Misc::Crosshair::sizeX = 5;
                        Config::Misc::Crosshair::sizeY = 5;
                        Config::Misc::Crosshair::OffsetPosX = 0;
                        Config::Misc::Crosshair::OffsetPosY = 0;
                        Config::Misc::Crosshair::TrickNess = 1;
                    }


                }
                EndChildImGui();

                ImGui::SetCursorPos(ImVec2(450, 330));

                BeginChildImGui("Camera", ImVec2(430, 250));
                {
                   
                    ImGui::SliderFloat("FOV", &Config::Misc::fov, 20, 200);
                    if (ImGui::Button("Set FOV"))
                    {
                        SDK::UBpGameplayHelperLib::SetFoV(Config::Misc::fov);

                    }


                }
                EndChildImGui();

            }

            if (ImGui::BeginTabItem("Settings"))
            {

                ImGui::EndTabItem();
            }


            ImGui::EndTabBar();
        }


		ImGui::End();
        ImGui::PopFont();
	}







}