class CfgPatches
{
	class A6MD_zeus_modules_Explosive
	{
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		units[] = {"A6MD_moduleExplosiveBarrelsmall","A6MD_moduleExplosiveBarrelBig","A6MD_moduleExplosiveBarrelmassive"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F","A6MD_zeus_modules_core"};
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
			class Default;
			class Edit;					// Default edit box (i.e., text input field)
			class Combo;				// Default combo box (i.e., drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};

		class ModuleDescription 
		{
		class AnyPlayer;
		class AnyBrain;
		class EmptyDetector;
		};
	};
	class A6MD_moduleExplosiveBarrelBig : Module_F
	{
		mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = A6MD_Explosives;
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "ExplosiveBarrel Big (Green)";	// Name displayed in the menu
		icon = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_trigger_explosivebarrelgreen_big";			// Name of function triggered once conditions are met
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
		category = A6MD_Explosives;
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "ExplosiveBarrel Small (Green)";	// Name displayed in the menu
		icon = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_trigger_explosivebarrelgreen_small";			// Name of function triggered once conditions are met
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
		category = A6MD_Explosives;
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "ExplosiveBarrel Massive (Green)";	// Name displayed in the menu
		icon = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_trigger_explosivebarrelgreen_massive";			// Name of function triggered once conditions are met
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
			file = "\A6MD\Zeus_Modules\explosive\scripts";
			class moduleExplosiveBarrel{};
			class trigger_explosivebarrelgreen_big{};
			class trigger_explosivebarrelgreen_small{};
			class trigger_explosivebarrelgreen_massive{};
			class explosive_server_barrel{};
		};
	};
};