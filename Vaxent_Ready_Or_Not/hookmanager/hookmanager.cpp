#include "hookmanager.h"
#include "../utils/Utils.h"


Hook::Hook(void* hookaddress, SDK::UClass* Class)
{
	this->hookaddress = hookaddress;
	this->Class = Class;
}

void* Hook::GetHookAdress()
{
	return this->hookaddress;
}

SDK::UClass* Hook::GetClass()
{
	return this->Class;
}
bool Hook::CallHookAddress(SDK::UObject* obj, SDK::UFunction* pUFunc, void* pParms)
{
	bool(*HookAddress)(SDK::UObject*, SDK::UFunction*, void*);
	HookAddress = (decltype(HookAddress))this->hookaddress;
	return HookAddress(obj, pUFunc, pParms);
}
bool Hook::IsValid()
{
	return this->hookaddress && this->Class;
}

void HookManager::Add(std::string funcname, void* hookaddress, SDK::UClass* Class)
{
	Hook hook = Hook(hookaddress, Class);
	
	this->AllHook[funcname] = hook;


	
}

std::map <std::string, Hook> HookManager::GetAllHook() {

	return this->AllHook;
}

void(*ProcessEvent)(SDK::UObject* obj, SDK::UFunction* pUFunc, void* pParms);



void hkProcessEvent(SDK::UObject* obj, SDK::UFunction* pUFunc, void* pParms)
{

	if (pUFunc)
	{
	
		Hook hook = hookmanager.GetAllHook()[pUFunc->GetName()];
		
		
	

		if (hook.IsValid() && obj->IsA(hook.GetClass()))
		{


		

			bool wantreturn = hook.CallHookAddress(obj, pUFunc, pParms);
			if (!wantreturn)
				return;

		}
	}
	
	return ProcessEvent(obj, pUFunc, pParms);
}



void HookManager::HookProcessEvent()
{
	Utils::Hook((void*)(SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent), &hkProcessEvent, (void**)&ProcessEvent, "ProcessEvent");
}