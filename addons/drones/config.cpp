class CfgPatches
{
	class A6MD_All_in_One_drones
	{
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		units[] = {"A6MD_moduleDronesGrenade"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F","A6MD_All_in_One_core"};
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class A6MD_Drones: NO_CATEGORY
	{
		displayName = "6MD Drones";
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
	class A6MD_moduleDronesGrenade : Module_F
	{
		mapSize = 1;
		author = "Chilla55";
		vehicleClass = "Modules";
		category = "A6MD_Drones";
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "Drone with Grenades";	// Name displayed in the menu
		icon = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_drones_module_grenade";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		//curatorInfoType = "RscDisplayAttributemoduleExplosiveBarrel";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits {
			class Units : Units
			{
				property = "A6MD_moduleDronesGrenade_Units";
			};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Drone with 4 Grenades";
			sync[] = {};
		};
	};
};


class CfgFunctions
{
	class A6MD
	{
		class Drones
		{
			file = "\A6MD\All_in_One\addons\drones\scripts";
			class drones_module_grenade{};
			class drones_server_grenade_action_rem{};
			class drones_server_grenade_action{};
			class drones_server_grenade{};
			class drones_server_grenade_hit{};
		};
	};
};

class CfgAmmo
{
	class Grenade;
	class A6MD_Drone_Grenade_Impact : Grenade
	{
		explosionTime = 0;
		hit = 8;
		indirectHit = 8;
		indirectHitRange = 6;
		dangerRadiusHit = 60;
		suppressionRadiusHit = 24;
		typicalspeed = 18;
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 0;
	};
};
