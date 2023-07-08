class CfgPatches
{
	class A6MD_All_in_One_carbomb
	{
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		units[] = {"A6MD_moduleCarbomb_attach_small","A6MD_moduleCarbomb_attach_medium","A6MD_moduleCarbomb_attach_big","A6MD_moduleCarbomb_init","A6MD_moduleCarbomb_defuse"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F","A6MD_All_in_One_core"};
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class A6MD_Carbomb: NO_CATEGORY
	{
		displayName = "6MD Car Bombs";
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
	class A6MD_moduleCarbomb_init : Module_F
	{
		mapSize = 1;
		author = "Chilla55";
		vehicleClass = "Modules";
		category = "A6MD_Carbomb";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "Carbomb Client init";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_carbomb_module_client_init";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		//curatorInfoType = "RscDisplayAttributemoduleResupply3Mag";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits
		{
			class Units : Units
			{
				property = "A6MD_moduleCarbomb_init_Units";
			};
		};
		class ModuleDescription : ModuleDescription
			{
			description = "Initialize Car bomb client action";
			sync[] = {};
		};
	};
	class A6MD_moduleCarbomb_attach_small : Module_F
	{
		mapSize = 1;
		author = "Chilla55";
		vehicleClass = "Modules";
		category = "A6MD_Carbomb";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "Carbomb small attach to vehicle";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_carbomb_module_attach_small";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		curatorCanAttach = 1;
		//curatorInfoType = "RscDisplayAttributemoduleResupply3Mag";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits
		{
			class Units : Units
			{
				property = "A6MD_moduleCarbomb_attach_small_Units";
			};
		};
		class ModuleDescription : ModuleDescription
			{
			description = "Attach a small Carbomb to vehicle";
			sync[] = {};
		};
	};
	class A6MD_moduleCarbomb_attach_medium : Module_F
	{
		mapSize = 1;
		author = "Chilla55";
		vehicleClass = "Modules";
		category = "A6MD_Carbomb";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "Carbomb medium attach to vehicle";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_carbomb_module_attach_medium";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		curatorCanAttach = 1;
		//curatorInfoType = "RscDisplayAttributemoduleResupply3Mag";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits
		{
			class Units : Units
			{
				property = "A6MD_moduleCarbomb_attach_medium_Units";
			};
		};
		class ModuleDescription : ModuleDescription
			{
			description = "Attach a medium Carbomb to vehicle";
			sync[] = {};
		};
	};
	class A6MD_moduleCarbomb_attach_big : Module_F
	{
		mapSize = 1;
		author = "Chilla55";
		vehicleClass = "Modules";
		category = "A6MD_Carbomb";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "Carbomb big attach to vehicle";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_carbomb_module_attach_big";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		curatorCanAttach = 1;
		//curatorInfoType = "RscDisplayAttributemoduleResupply3Mag";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits
		{
			class Units : Units
			{
				property = "A6MD_moduleCarbomb_attach_big_Units";
			};
		};
		class ModuleDescription : ModuleDescription
			{
			description = "Attach a big Carbomb to vehicle";
			sync[] = {};
		};
	};
	class A6MD_moduleCarbomb_defuse : Module_F
	{
		mapSize = 1;
		author = "Chilla55";
		vehicleClass = "Modules";
		category = "A6MD_Carbomb";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "defuse Carbomb";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_carbomb_module_defuse";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		curatorCanAttach = 1;
		//curatorInfoType = "RscDisplayAttributemoduleResupply3Mag";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits
		{
			class Units : Units
			{
				property = "A6MD_moduleCarbomb_defuse_Units";
			};
		};
		class ModuleDescription : ModuleDescription
			{
			description = "defuse Carbomb";
			sync[] = {};
		};
	};
};

class CfgFunctions
{
	class A6MD
	{
		class Carbomb
		{
			file = "\A6MD\All_in_One\addons\carbomb\scripts";
			class carbomb_client_defuse{};
			class carbomb_client_examine{};
			class carbomb_client_init{};
			class carbomb_server_defuse{};
			class carbomb_server_examine{};
			class carbomb_server_vinit{};
			class carbomb_server_module_defuse{};
			class carbomb_common_defuse{};
			class carbomb_module_client_init{};
			class carbomb_module_attach_small{};
			class carbomb_module_attach_medium{};
			class carbomb_module_attach_big{};
			class carbomb_module_defuse{};
		};
	};
};