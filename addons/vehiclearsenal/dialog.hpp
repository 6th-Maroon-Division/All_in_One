#include "defines.hpp"

class RscText
{
    access = 0;
    type = 0;
    idc = -1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    text = "";
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0.037;
    w = 0.3;
    style = 0;
    shadow = 1;
    font = "PuristaMedium";
    SizeEx = 0.03921;
};

class RscButton
{
    access = 0;
    type = 1;
    text = "";
    colorText[] = {1,1,1,1};
    colorDisabled[] = {0.4,0.4,0.4,1};
    colorBackground[] = {0,0,0,0.8};
    colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
    colorBackgroundActive[] = {0.2,0.2,0.2,1};
    colorFocused[] = {0,0,0,0.8};
    colorShadow[] = {0,0,0,0};
    colorBorder[] = {0,0,0,1};
    soundEnter[] = {"",0.09,1};
    soundPush[] = {"",0.09,1};
    soundClick[] = {"",0.09,1};
    soundEscape[] = {"",0.09,1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.095589;
    h = 0.039216;
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = 0.03921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};

class RscPicture
{
    access = 0;
    idc = -1;
    type = 0;
    style = 48;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = "PuristaMedium";
    sizeEx = 0.023;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0.2;
    h = 0.15;
};

class RscButtonArsenal;

class RscListbox
{
    access = 0;
    type = 5;
    style = 16;
    w = 0.4;
    h = 0.4;
    font = "PuristaMedium";
    sizeEx = 0.03921;
    rowHeight = 0;
    colorText[] = {1,1,1,1};
    colorScrollbar[] = {1,0,0,1};
    colorSelect[] = {0,0,0,1};
    colorSelect2[] = {0,0,0,1};
    colorSelectBackground[] = {0.6,0.6,0.6,1};
    colorSelectBackground2[] = {0.2,0.2,0.2,1};
    colorBackground[] = {0,0,0,0.8};
    maxHistoryDelay = 1.0;
    soundSelect[] = {"",0.1,1};
    period = 1;
    autoScrollSpeed = -1;
    autoScrollDelay = 5;
    autoScrollRewind = 0;
    shadow = 0;
    
    class ScrollBar
    {
        color[] = {1,1,1,0.6};
        colorActive[] = {1,1,1,1};
        colorDisabled[] = {1,1,1,0.3};
        thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
        arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
        arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
        border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
        shadow = 0;
    };
};

class 6MD_Vehicle_Arsenal_Dialog
{
    idd = IDC_MAIN_DIALOG;
    movingEnable = false;
    enableSimulation = true;
    
    class controlsBackground
    {
        class UIBackground: RscText
        {
            idc = IDC_UI_BACKGROUND;
            colorBackground[] = {0.25, 0.25, 0.25, 0.95}; // Semi-transparent black
            x = "0 * safezoneW";
            y = "0 * safezoneH";
            w = "0.305 * safezoneW";
            h = "0.577 * safezoneH"; // Fullscreen background
        };
    };
    
    class controls
    {
        class Title: RscText
        {
            idc = IDC_LABEL_TITLE;
            text = "6MD Vehicle Arsenal";
            x = "0.003 * safezoneW";
            y = "0.0025 * safezoneH";
            w = "0.2 * safezoneW";
            h = "0.03 * safezoneH";
        };
        
        class ButtonWeapons: RscButtonArsenal
        {
            idc = IDC_BUTTON_WEAPONS;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\PrimaryWeapon_ca.paa"; // Path to your weapons icon image
            x = "0.006 * safezoneW";
            y = "0.03 * safezoneH";
            w = "0.025 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class ButtonMedic: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.006 * safezoneW";
            y = "0.085 * safezoneH";
            w = "0.025 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class ButtonClothing: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.006 * safezoneW";
            y = "0.14 * safezoneH";
            w = "0.025 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class ButtonAmmo: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.006 * safezoneW";
            y = "0.195 * safezoneH";
            w = "0.025 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class ButtonExplosiv: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.006 * safezoneW";
            y = "0.25 * safezoneH";
            w = "0.025 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class ButtonMisc: RscButtonArsenal
        {
            idc = IDC_BUTTON_MISC;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.006 * safezoneW";
            y = "0.305 * safezoneH";
            w = "0.025 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class ItemList: RscListbox
        {
            idc = IDC_ITEM_LIST;
            x = "0.0375 * safezoneW";
            y = "0.03 * safezoneH";
            w = "0.1 * safezoneW";
            h = "0.5 * safezoneH";
        };

        class ButtonAdd: RscButton
        {
            idc = IDC_BUTTON_ADD;
            text = "+";
            x = "0.19 * safezoneW";
            y = "0.67 * safezoneH";
            w = "0.04 * safezoneW";
            h = "0.04 * safezoneH";
            action = "hint 'Add button pressed';";
        };

        class ButtonRemove: RscButton
        {
            idc = IDC_BUTTON_REMOVE;
            text = "-";
            x = "0.05 * safezoneW";
            y = "0.67 * safezoneH";
            w = "0.04 * safezoneW";
            h = "0.04 * safezoneH";
            action = "hint 'Remove button pressed';";
        };
        
        class InventoryList: RscListbox
        {
            idc = IDC_INVENTORY_LIST;
            x = "0.145 * safezoneW";
            y = "0.03 * safezoneH";
            w = "0.155 * safezoneW";
            h = "0.5 * safezoneH";
        };
        
        class ButtonLoadout: RscButton
        {
            idc = IDC_BUTTON_LOADOUT;
            text = "Loadout";
            x = "0.196 * safezoneW";
            y = "0.5375 * safezoneH";
            w = "0.05 * safezoneW";
            h = "0.033 * safezoneH";
            action = "hint 'Loadout button pressed';";
        };
        
        class ButtonClear: RscButton
        {
            idc = IDC_BUTTON_CLEAR;
            text = "Clear";
            x = "0.25 * safezoneW";
            y = "0.5375 * safezoneH";
            w = "0.05 * safezoneW";
            h = "0.033 * safezoneH";
            action = "hint 'Clear button pressed';";
        };
    };
};