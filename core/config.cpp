class CfgPatches
{
	class A6MD_All_in_One_core
	{
        name="6MD Zeus Modules";
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
	};
};
class CfgFunctions
{
    class A6MD
    {
        class core
        {
			file = "\A6MD\All_in_One\core\scripts";
            class init
            {
                postInit=1;
            };
        };
    };
};

class CfgMods
{
	class Mod_Base;
	class A6MD_All_in_One : Mod_Base
	{
		picture = "\A6MD\All_in_One\core\icons\Logo_6MD.paa";
		logo = "\A6MD\All_in_One\core\icons\Logo_6MD.paa";
		logoOver = "\A6MD\All_in_One\core\icons\Logo_6MD.paa";
		tooltipOwned = "6MD Zeus Modules";
		overview = "6th Maroon Division Zeus Modules";
		hideName = 1;
		hidePicture = 0;
		name = "6MD Zeus Modules";
		dir = "A6MD\All_in_One";
	};
};