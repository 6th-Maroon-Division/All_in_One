class CfgPatches 
{
	//6MD Custom Insignia
    class A6MD_All_in_One_vehiclearsenal
    {
        name = "6MD Vehicle Arsenal";
        author = "6MD Dev Team";
        authors[] = {"Chilla55"};
        requiredAddons[] = {
			"ace_arsenal",
			"A6MD_All_in_One_core"
		};
        requiredVersion = 1.0;
    };
};

class CfgFunctions
{
    class A6MD_vehiclearsenal
    {
        class scripts
        {
            file = "\A6MD\All_in_One\addons\vehiclearsenal\scripts";
            class open{};
        };
    };
};

#include "dialog.hpp"