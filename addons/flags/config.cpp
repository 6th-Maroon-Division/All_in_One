class CfgPatches
{
	class A6MD_All_in_One_flags
	{
		units[]=
		{
			"MD_Flag",
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
	class FlagCarrier;
	class MD_Flag: FlagCarrier
	{
		scope=0;
		scopeCurator=0;
		author="Demsoft,Chilla55";
		vehicleClass="Flag";
		editorSubcategory="EdSubcat_Flags";
		nameSound="flag";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
	};
	class White_6MD_Flag: MD_Flag
	{
		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName="Flag - 6MD (White)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\A6MD\All_in_One\addons\flags\flags\6MD\White_6MD_Flag_co.paa'";
		};
	};
    	class Maroon_6MD_Flag: MD_Flag
	{
		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName="Flag - 6MD (Maroon)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\A6MD\All_in_One\addons\flags\flags\6MD\Red_6MD_Flag_co.paa""";
		};
	};
    	class Black_6MD_Flag: MD_Flag
	{
		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName="Flag - 6MD (Black)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\A6MD\All_in_One\addons\flags\flags\6MD\Black_6MD_Flag_co.paa""";
		};
	};
        	class Black_Invert_6MD_Flag: MD_Flag
	{
		scope=2;                // Editor visibility; 2 will show it in the menu, 1 will hide it.
		scopeCurator = 2;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

		displayName="Flag - 6MD (Inverted)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\A6MD\All_in_One\addons\flags\flags\6MD\Black_Invert_6MD_Flag_co.paa""";
		};
	};
};
