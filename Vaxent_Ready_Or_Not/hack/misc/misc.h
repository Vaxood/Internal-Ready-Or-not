#pragma once
#include "../../sdk/SDK.hpp"
namespace Misc {
	void Do() noexcept;
	void DoRender()noexcept;
	bool OnTakeDamage(SDK::UBaseCombatActivity* activity, SDK::Params::BaseCombatActivity_OnTakeDamage* params) noexcept;
		
}