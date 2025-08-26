#ifndef script_macros
	#define script_macros
	#include "script_macros.hpp"
#endif

class CfgPatches
{
	class A6MD_All_in_One_Spawn_Units
	{
		units[]=
		{
			"A6MD_Zeus",
			"A6MD_BZeus",
			"A6MD_PL",
			"A6MD_PM",
			"A6MD_PE",
			"A6MD_PUAV",
			"A6MD_SL",
			"A6MD_FTL",
			"A6MD_GL",
			"A6MD_LMG",
			"A6MD_GPMG",
			"A6MD_AB",
			"A6MD_R",
			"A6MD_Mark",
			"A6MD_LAT",
			"A6MD_MAT",
			"A6MD_ATA",
			"A6MD_Gunner",
			"A6MD_Driver",
			"A6MD_Commander",
			"A6MD_Sniper",
			"A6MD_Spotter",
			"A6MD_H_P",
			"A6MD_H_CP",
			"A6MD_H_C",
			"A6MD_Mort",
			"A6MD_Mortass"
        };
		weapons[]={};
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		requiredVersion=2.00;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A6MD_All_in_One_core"
		};
	};
};

class CfgVehicles
{
	#include "units\bluefore.hpp"
};
class CfgFunctions
{
	class A6MD
	{
		class Spawn
		{
			file = "\A6MD\All_in_One\addons\spawn\scripts";
			class spawn_init{};
		};
	};
};
