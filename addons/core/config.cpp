class CfgPatches
{
	class A6MD_All_in_One_core
	{
        name="6MD Zeus Modules";
		author="6MD Dev Team";
        authors[]= {"Chilla55","Demsoft"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
        units[] = {};
	};
};

class CfgMods
{
	class Mod_Base;
	class A6MD_All_in_One : Mod_Base
	{
		picture = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";
		logo = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";
		logoOver = "\A6MD\All_in_One\addons\core\icons\Logo_6MD.paa";
		tooltipOwned = "6MD AIO";
		overview = "6th Maroon Division Zeus Modules, Custom Insignias, Custom Berets and more";
		hideName = 1;
		hidePicture = 0;
		name = "6MD All in One mod";
		dir = "A6MD\All_in_One";
	};
};

class CfgFactionClasses
{
	class A6MD_Faction_6MD // Category class, you point to it in editorCategory property
	{
		displayName = "6MD"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class A6MD_6MD_Man // Category class, you point to it in editorSubcategory property
	{
		displayName = "Man"; // Name visible in the list
	};
};
