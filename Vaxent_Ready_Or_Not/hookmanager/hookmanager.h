#pragma once
#include <iostream>
#include <map>
#include "../sdk/SDK.hpp"



class Hook {
public:
	Hook() = default;

	Hook(void* hookaddress, SDK::UClass* Class);
	void* GetHookAdress();
	SDK::UClass* GetClass();
	bool CallHookAddress(SDK::UObject*, SDK::UFunction* pUFunc, void* pParms);
	bool IsValid();

private:
	void* hookaddress = nullptr;
	SDK::UClass* Class = nullptr;
};



class HookManager {
public:
	HookManager() = default;
	~HookManager() = default;
	void Add(std::string funcname, void* hookaddress, SDK::UClass*);
	void HookProcessEvent();
	std::map <std::string ,Hook> GetAllHook();

private:
	std::map <std::string, Hook> AllHook;

};

inline HookManager hookmanager = {};
