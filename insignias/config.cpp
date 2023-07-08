#include "BIS_AddonInfo.hpp"
class CfgPatches 
{
	//6MD Custom Insignia
    class A6MD_All_in_One_insignia
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_Characters_F_BLUFOR","A6MD_All_in_One_core"};
        requiredVersion = 0.1;
    };
};

class CfgUnitInsignia 
{
	#include "CfgUnitInsignia.hpp"
};
