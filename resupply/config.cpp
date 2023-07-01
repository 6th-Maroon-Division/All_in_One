class CfgPatches
{
	class A6MD_zeus_modules_resupply
	{
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		units[] = {"A6MD_moduleResupply3Mag","A6MD_moduleResupply5Mag","A6MD_moduleResupplyCache","A6MD_moduleResupplyLaunchers","A6MD_moduleResupplyMedicalCache","A6MD_moduleResupplyMedicalField","A6MD_moduleResupplyWeaponCache"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F","A6MD_zeus_modules_core"};
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class A6MD_Supply: NO_CATEGORY
	{
		displayName = "Resupply (Air Drop)";
	};
};


class CfgVehicles 
{
	#include "CfgVehicles.hpp"
};

class CfgFunctions
{
	class A6MD
	{
		class Supports
		{
			file = "\A6MD\Zeus_Modules\resupply\scripts";
			class moduleResupply3Mag{};
			class moduleResupply5Mag{};
			class moduleResupplyCache{};
			class moduleResupplyLaunchers{};
			class moduleResupplyMedicalCache{};
			class moduleResupplyMedicalField{};
			class moduleResupplyWeaponCache{};			
		};
	};
};