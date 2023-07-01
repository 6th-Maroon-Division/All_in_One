class CfgPatches
{
	class A6MD_zeus_modules_core
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
			file = "\A6MD\Zeus_Modules\core\scripts";
            class init
            {
                postInit=1;
            };
        };
    };
};