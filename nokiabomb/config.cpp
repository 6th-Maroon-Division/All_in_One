class CfgPatches
{
	class A6MD_zeus_modules_Nokiabomb
	{
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		units[] = {"A6MD_moduleNokiaBomb_Instant"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F","A6MD_zeus_modules_core","A6MD_zeus_modules_Explosive"};
	};
};
class CfgFactionClasses
{
	class A6MD_Explosives;
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
	class A6MD_moduleNokiaBomb_Instant : Module_F
	{
		mapSize = 1;
		author = "Chilla55";
		vehicleClass = "Modules";
		category = A6MD_Explosives;
		side = 7;

		scope = 2;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName = "Nokia Bomb Instant";	// Name displayed in the menu
		icon = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";				// Map icon. Delete this entry to use the default icon
		picture = "";
		portrait = "\A6MD\Zeus_Modules\core\icons\Logo_6MD.paa";

		function = "A6MD_fnc_nokiabomb_module_instant";			// Name of function triggered once conditions are met
		functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
		isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		//curatorInfoType = "RscDisplayAttributemoduleExplosiveBarrel";	// Menu displayed when the module is placed or double-clicked on by Zeus

		class ArgumentsBaseUnits : ArgumentsBaseUnits {
			class Units : Units
			{
				property = "A6MD_moduleNokiaBomb_Instant_Units";
			};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Nokia Bomb Instant explode";
			sync[] = {};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class A6MD_nokiabomb_oldnokia
	{
		name = "A6MD_nokiabomb_oldnokia";
		sound[] = {"\A6MD\zeus_modules\nokiabomb\sounds\oldNokia.ogg", db+10, 1, 25};
		titles[] = {0,"Nokia Phone Rings"};
	};
};

class CfgFunctions
{
	class A6MD
	{
		class nokiabomb
		{
			file = "\A6MD\Zeus_Modules\nokiabomb\scripts";
			class nokiabomb_module_instant{};
			class nokiaBomb_server_instant{};
		};
	};
};