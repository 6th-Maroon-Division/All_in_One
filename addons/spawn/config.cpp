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
			"A6MD_PL"
        };
		weapons[]={};
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		requiredVersion=1.0;
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