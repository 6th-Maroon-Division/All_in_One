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

class A6MD_moduleResupply3Mag : Module_F
{
	mapSize = 1;
	author = "Demsoft";
	vehicleClass = "Modules";
	category = "A6MD_Supply";
	side = 7;

	scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "Resupply (Air Drop - 3 Mag)";	// Name displayed in the menu
	icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
	picture = "";
	portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

	function = "A6MD_fnc_moduleResupply3Mag";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	//curatorInfoType = "RscDisplayAttributemoduleResupply3Mag";	// Menu displayed when the module is placed or double-clicked on by Zeus

	class ArgumentsBaseUnits : ArgumentsBaseUnits
	{
		class Units : Units
		{
			property = "A6MD_moduleResupply3Mag_Units";
		};
	};
	class ModuleDescription : ModuleDescription
		{
		description = "Resupply (Air Drop - 3 Mag)";
		sync[] = {};
	};
};

class A6MD_moduleResupply5Mag : Module_F
{
	mapSize = 1;
	author = "Demsoft";
	vehicleClass = "Modules";
	category = "A6MD_Supply";
	side = 7;

	scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "Resupply (Air Drop - 5 Mag)";	// Name displayed in the menu
	icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
	picture = "";
	portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

	function = "A6MD_fnc_moduleResupply5Mag";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	//curatorInfoType = "RscDisplayAttributemoduleResupply5Mag";	// Menu displayed when the module is placed or double-clicked on by Zeus

	class ArgumentsBaseUnits : ArgumentsBaseUnits {
		class Units : Units
		{
			property = "A6MD_moduleResupply5Mag_Units";
		};
	};
	class ModuleDescription : ModuleDescription
	{
		description = "Resupply (Air Drop - 5 Mag)";
		sync[] = {};
	};
};

class A6MD_moduleResupplyCache : Module_F
{
	mapSize = 1;
	author = "Demsoft";
	vehicleClass = "Modules";
	category = "A6MD_Supply";
	side = 7;

	scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "Resupply (Air Drop - Cache)";	// Name displayed in the menu
	icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
	picture = "";
	portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

	function = "A6MD_fnc_moduleResupplyCache";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	//curatorInfoType = "RscDisplayAttributemoduleResupplyCache";	// Menu displayed when the module is placed or double-clicked on by Zeus

	class ArgumentsBaseUnits : ArgumentsBaseUnits
	{
		class Units : Units
		{
			property = "A6MD_moduleResupplyCache_Units";
		};
	};
	class ModuleDescription : ModuleDescription
	{
		description = "Resupply (Air Drop - Cache)";
		sync[] = {};
	};
};

class A6MD_moduleResupplyLaunchers : Module_F
{
	mapSize = 1;
	author = "Demsoft";
	vehicleClass = "Modules";
	category = "A6MD_Supply";
	side = 7;

	scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "Resupply (Air Drop - Launchers)";	// Name displayed in the menu
	icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
	picture = "";
	portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

	function = "A6MD_fnc_moduleResupplyLaunchers";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	//curatorInfoType = "RscDisplayAttributemoduleResupplyLaunchers";	// Menu displayed when the module is placed or double-clicked on by Zeus

	class ArgumentsBaseUnits : ArgumentsBaseUnits
	{
		class Units : Units
		{
			property = "A6MD_moduleResupplyLaunchers_Units";
		};
	};
	class ModuleDescription : ModuleDescription
	{
		description = "Resupply (Air Drop - Launchers)";
		sync[] = {};
	};
};

class A6MD_moduleResupplyMedicalCache : Module_F
{
	mapSize = 1;
	author = "Demsoft";
	vehicleClass = "Modules";
	category = "A6MD_Supply";
	side = 7;

	scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "Resupply (Air Drop - Medical Cache)";	// Name displayed in the menu
	icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
	picture = "";
	portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

	function = "A6MD_fnc_moduleResupplyMedicalCache";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	//curatorInfoType = "RscDisplayAttributemoduleResupplyMedicalCache";	// Menu displayed when the module is placed or double-clicked on by Zeus

	class ArgumentsBaseUnits : ArgumentsBaseUnits
	{
		class Units : Units
		{
			property = "A6MD_moduleResupplyMedicalCache_Units";
		};
	};
	class ModuleDescription : ModuleDescription
	{
		description = "Resupply (Air Drop - Medical Cache)";
		sync[] = {};
	};
};

class A6MD_moduleResupplyMedicalField : Module_F
{
	mapSize = 1;
	author = "Demsoft";
	vehicleClass = "Modules";
	category = "A6MD_Supply";
	side = 7;

	scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "Resupply (Air Drop - Medical Field)";	// Name displayed in the menu
	icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
	picture = "";
	portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

	function = "A6MD_fnc_moduleResupplyMedicalField";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	//curatorInfoType = "RscDisplayAttributemoduleResupplyMedicalField";	// Menu displayed when the module is placed or double-clicked on by Zeus

	class ArgumentsBaseUnits : ArgumentsBaseUnits
	{
		class Units : Units
		{
			property = "A6MD_moduleResupplyMedicalField_Units";
		};
	};
	class ModuleDescription : ModuleDescription
	{
		description = "Resupply (Air Drop - Medical Field)";
		sync[] = {};
	};
};

class A6MD_moduleResupplyWeaponCache : Module_F
{
	mapSize = 1;
	author = "Demsoft";
	vehicleClass = "Modules";
	category = "A6MD_Supply";
	side = 7;

	scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "Resupply (Air Drop - Weapon Cache)";	// Name displayed in the menu
	icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
	picture = "";
	portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

	function = "A6MD_fnc_moduleResupplyWeaponCache";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	//curatorInfoType = "RscDisplayAttributemoduleResupplyWeaponCache";	// Menu displayed when the module is placed or double-clicked on by Zeus

	class ArgumentsBaseUnits : ArgumentsBaseUnits
	{
		class Units : Units
		{
			property = "A6MD_moduleResupplyWeaponCache_Units";
		};
	};
	class ModuleDescription : ModuleDescription
	{
		description = "Resupply (Air Drop - Weapon Cache)";
		sync[] = {};
	};
};
