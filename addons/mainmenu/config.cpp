class CfgPatches
{
    class A6MD_All_in_One_mainmenu
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.06;
        requiredAddons[] = {"A6MD_All_in_One_core","A3_UI_F"};
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
    delete SP_FD14;

    // --- 1) Main OP Server tile ------------------------------------------------
    class A6MD_MainOp
    {
        text = "Main OP Server";
        textIsQuote = 0;
        picture = "";
        video = "A6MD\All_in_One\addons\mainmenu\data\intro.ogv";
        action = "connectToServer ['88.99.148.143', 2008, 'Grey']";
        actionText = "Join";
        condition = "true";
        tip = "6MD OP server.";
        priority = 2;
    };

    // --- 2) Antistasi Server tile ----------------------------------------------
    class A6MD_Antistasi
    {
        text = "Antistasi Server";
        textIsQuote = 0;
        picture = "";
        video = "A6MD\All_in_One\addons\mainmenu\data\intro.ogv";
        action = "connectToServer ['88.99.148.143', 2000, 'Grey']";
        actionText = "Join";
        condition = "true";
        tip = "6MD Antistasi server.";
        priority = 1;
    };

    // --- 3) Training Server tile -----------------------------------------------
    class A6MD_Training
    {
        text = "Training Server";
        textIsQuote = 0;
        picture = "";
        video = "A6MD\All_in_One\addons\mainmenu\data\intro.ogv";
        action = "connectToServer ['88.99.148.143', 2004, 'Grey']";
        actionText = "Join";
        condition = "true";
        tip = "6MD training ground.";
        priority = 0;
    };
};

class RscDisplayMain
{
    class controlsBackground
    {
        class A6MD_Background: RscPicture
        {
            idc = -1;
            text = "A6MD\All_in_One\addons\mainmenu\data\intro.ogv";
            x = "safezoneX";
            y = "safezoneY";
            w = "safezoneW";
            h = "safezoneH";
        };
    };
};