class CfgPatches
{
    class A6MD_All_in_One_mainmenu
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A6MD_All_in_One_core","A3_UI_F"};
    };
    class A6MD_All_in_One_mainmenu_AoW
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_AoW"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Bootcamp
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Bootcamp"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Curator
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Curator"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Data
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Data"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Decade
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Decade"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Enoch
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Enoch"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Exp
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Exp"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Exp_A
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Exp_A"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Heli
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Heli"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Jets
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Jets"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Kart
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Kart"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Mark
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Mark","A3_Ui_F_MP_Mark"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Oldman
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Oldman"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Orange
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Orange"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Patrol
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Patrol"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Tacops
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Tacops"};
        skipWhenMissingDependencies = 1;
    };
    class A6MD_All_in_One_mainmenu_Tank
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A3_Ui_F_Tank"};
        skipWhenMissingDependencies = 1;
    };
};

class RscPicture;
class RscVideo;
class RscText;

class RscStandardDisplay;

class CfgMainMenuSpotlight
{
    // Remove common vanilla tiles (safe to ignore if they don't exist in your build).
    delete ApexProtocol;
    delete EastWind;
    delete Orange_Campaign;
    delete Orange_CampaignGerman;
    delete BootCamp;
    delete Tacops_Campaign;
    delete OldMan;
    delete AoW_Showcase_Future;
    delete AoW_Showcase_AoW;
    delete Contact_Campaign;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Tacops_Campaign_01;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_03;
    delete Tanks_Campaign_01;
    delete SP_FD14;

    // --- 1) Main OP Server tile ------------------------------------------------
    class A6MD_MainOp
    {
        text = "Main OP Server";
        textIsQuote = 0;
        picture = "";
        video = "";
        action = "connectToServer ['88.99.148.143', 2008, 'Grey']";
        actionText = "Join";
        condition = "!( 'A3A_ultimate' in activatedAddons )";
        tip = "6MD OP server.";
        priority = 2;
    };

    // --- 2) Antistasi Server tile ----------------------------------------------
    class A6MD_Antistasi
    {
        text = "Antistasi Server";
        textIsQuote = 0;
        picture = "";
        video = "";
        action = "connectToServer ['88.99.148.143', 2000, 'Grey']";
        actionText = "Join";
        condition = "'A3A_ultimate' in activatedAddons";
        tip = "6MD Antistasi server.";
        priority = 1;
    };

    // --- 3) Training Server tile -----------------------------------------------
    /**class A6MD_Training
    {
        text = "Training Server";
        textIsQuote = 0;
        picture = "";
        video = "";
        action = "connectToServer ['88.99.148.143', 2004, 'Grey']";
        actionText = "Join";
        condition = "!( 'A3A_ultimate' in activatedAddons )";
        tip = "6MD training ground.";
        priority = 0;
    };**/
    
    class AoW_Showcase_Future
    {
        condition = "false";
    };
    class Orange_Campaign
    {
        condition = "false";
    };
    class Tacops_Campaign_01
    {
        condition = "false";
    };
};

class RscDisplayMain
{
    class controlsBackground
    {
        class A6MD_Background: RscPicture
        {
            idc = -1;
            text = "A6MD\All_in_One\addons\mainmenu\data\image.jpg";
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH";
        };
    };
};
