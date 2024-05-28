class CfgPatches
{
	class A6MD_All_in_One_flags
	{
		units[]=
		{
			"White_6MD_Flag",
            "Maroon_6MD_Flag",
            "Black_6MD_Flag",
            "Black_Invert_6MD_Flag"
            };
		weapons[]={};
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"A3_Structures_F_Mil_Flags",
			"A6MD_All_in_One_core"
		};
	};
};
class CfgVehicles
{
	class FlagPole_F;
	class White_6MD_Flag: FlagPole_F
	{
        mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = "Supports";
		side = 7;

		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		accuracy=10000;
		displayName="Flag - 6MD (White)";
		nameSound="flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\A6MD\All_in_One\addons\flags\flags\6MD\White_6MD_Flag_co.paa""";
		};
	};
    	class Maroon_6MD_Flag: FlagPole_F
	{
        mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = "Supports";
		side = 7;

		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		accuracy=10000;
		displayName="Flag - 6MD (Maroon)";
		nameSound="flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\A6MD\All_in_One\addons\flags\flags\6MD\Red_6MD_Flag_co.paa""";
		};
	};
    	class Black_6MD_Flag: FlagPole_F
	{
        mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = "Supports";
		side = 7;

		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		accuracy=10000;
		displayName="Flag - 6MD (Black)";
		nameSound="flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\A6MD\All_in_One\addons\flags\flags\6MD\Black_6MD_Flag_co.paa""";
		};
	};
        	class Black_Invert_6MD_Flag: FlagPole_F
	{
        mapSize = 1;
		author = "Demsoft";
		vehicleClass = "Modules";
		category = "Supports";
		side = 7;

		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		accuracy=10000;
		displayName="Flag - 6MD (Inverted)";
		nameSound="flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\A6MD\All_in_One\addons\flags\flags\6MD\Black_Invert_6MD_Flag_co.paa""";
		};
	};
};