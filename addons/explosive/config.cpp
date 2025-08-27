class CfgPatches
{
	class A6MD_All_in_One_Explosive
	{
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		units[] = {"A6MD_moduleExplosiveBarrelsmall","A6MD_moduleExplosiveBarrelBig","A6MD_moduleExplosiveBarrelmassive"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F","A6MD_All_in_One_core"};
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class A6MD_Explosives: NO_CATEGORY
	{
		displayName = "6MD Explosives";
	};
};

class CfgVehicles 
{
	class Logic;
	class Module_F : Logic
	{
		class ArgumentsBaseUnits 
		{
			class Units;				// Selection of units on which the module is applied
		};

		class ModuleDescription 
		{
		};
	};
	class A6MD_moduleExplosiveBarrelBig : Module_F
	{
		mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = "A6MD_Explosives";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "ExplosiveBarrel Big (Green)";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_explosive_module_green_big";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		//curatorInfoType = "RscDisplayAttributemoduleExplosiveBarrel";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits {
			class Units : Units
			{
				property = "A6MD_moduleExplosiveBarrel_Units";
			};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "ExplosiveBarrel Big (Green)";
			sync[] = {};
		};
	};
	class A6MD_moduleExplosiveBarrelsmall : Module_F
	{
		mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = "A6MD_Explosives";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "ExplosiveBarrel Small (Green)";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_explosive_module_green_small";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		//curatorInfoType = "RscDisplayAttributemoduleExplosiveBarrel";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits {
			class Units : Units
			{
				property = "A6MD_moduleExplosiveBarrel_Units";
			};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "ExplosiveBarrel Small (Green)";
			sync[] = {};
		};
	};
	class A6MD_moduleExplosiveBarrelmassive : Module_F
	{
		mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = "A6MD_Explosives";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "ExplosiveBarrel Massive (Green)";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_explosive_module_green_masive";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		//curatorInfoType = "RscDisplayAttributemoduleExplosiveBarrel";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits {
			class Units : Units
			{
				property = "A6MD_moduleExplosiveBarrel_Units";
			};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "ExplosiveBarrel Massive (Green)";
			sync[] = {};
		};
	};
};


class CfgFunctions
{
	class A6MD
	{
		class Explosive
		{
			file = "\A6MD\All_in_One\addons\explosive\scripts";
			class explosive_server_barrel_green{};
			class explosive_module_green_big{};
			class explosive_module_green_small{};
			class explosive_module_green_masive{};
			class explosive_server_barrel{};
		};
	};
};
