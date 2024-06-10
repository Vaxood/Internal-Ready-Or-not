#include "misc.h"
#include "../../utils/Utils.h"
#include "../../config/Config.hpp"
bool hitmarker = false;
float ct = 0;
void Misc::Do() noexcept
{
	if (!Utils::IsInGame())
		return;
	auto character = Utils::GetLocalPlayerCharacter();
	if (!character)
		return;

	auto bleedingcomp = character->BleedComponent;
	if (!bleedingcomp)
		return;


	if (Config::Misc::AutoHealth && character->BleedComponent->bIsBleeding)
	{
		character->BleedComponent->StopBleeding();
	}
		





}

void Misc::DoRender()noexcept
{
	if (hitmarker)
	{
		if (ImGui::GetTime() - ct >= 0.1)
			hitmarker = false;

		ImGui::GetBackgroundDrawList()->AddLine({ 1920 / 2 - 5,1080 / 2 - 5 }, { 1920 / 2 + 5 ,1080 / 2 + 5 }, ImColor{ 255,255,255 });
		
		ImGui::GetBackgroundDrawList()->AddLine({ 1920 / 2 - 5,1080 / 2 + 5 }, { 1920 / 2 + 5 ,1080 / 2 - 5 }, ImColor{ 255,255,255 });


	}


}


bool Misc::OnTakeDamage(SDK::UBaseCombatActivity* activity, SDK::Params::BaseCombatActivity_OnTakeDamage* params) noexcept
{
	if (!Config::Misc::Fun::hitmarker)
		return true;



		hitmarker = true;
		ct = ImGui::GetTime();

	
	


	return true;
}

