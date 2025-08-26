class CfgPatches 
{
	//6MD Custom Insignia
    class A6MD_All_in_One_utils
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
			"cba_keybinding",
			"cba_main",
			"cba_main_a3",
			"cba_settings",
			"extended_eventhandlers",
			"A3_Data_F_Sams_Loadorder",
			"A6MD_All_in_One_core"
		};
        requiredVersion = 1.0;
    };
};

class Extended_PreInit_EventHandlers
{
	class A6MD_All_in_One_breakWindow
	{
		init="call compile preprocessFileLineNumbers '\A6MD\All_in_One\addons\utils\script\XEH_PreInit.sqf'";
	};
};

class CfgMovesBasic {
	class CfgMovesMaleSdr
	{
		class States
		{
			class LadderCivilStatic;
			class LadderCivilUpLoop: LadderCivilStatic
			{
				speed="1.05/(2/3)";
			};
		};	
	};
};

class CfgAnimation
{
	ladderSpeed="0.5/(1/3)";
};
