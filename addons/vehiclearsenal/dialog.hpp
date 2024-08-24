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
        class Background: RscText
        {
            idc = IDC_BACKGROUND;
            colorBackground[] = {0,0,0,0.7}; // Semi-transparent dark background
            x = 0.1;
            y = 0.1;
            w = 0.8;
            h = "0.033 * safezoneH"; // Covering 1/3 of the button
        };
        
        class TitleBackground: RscText
        {
            colorBackground[] = {0.2,0.2,0.2,1};
            x = 0.1;
            y = 0.1;
            w = 0.8;
            h = "0.04 * safezoneH";
        };
    };
    
    class controls
    {
        class Title: RscText
        {
            idc = IDC_LABEL_TITLE;
            text = "6MD Vehicle Arsenal";
            x = 0.11;
            y = 0.105;
            w = 0.3;
            h = "0.03 * safezoneH";
        };
        
        class ButtonWeapons: RscPicture
        {
            idc = IDC_BUTTON_WEAPONS;
            text = "path\to\weapons\icon.paa"; // Path to your weapons icon image
            x = 0.1;
            y = 0.15;
            w = "0.05 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class ButtonMisc: RscPicture
        {
            idc = IDC_BUTTON_MISC;
            text = "path\to\misc\icon.paa"; // Path to your misc icon image
            x = 0.1;
            y = 0.22;
            w = "0.05 * safezoneW"; // Smaller icons
            h = "0.05 * safezoneH"; 
        };
        
        class InventoryList: RscListbox
        {
            idc = IDC_INVENTORY_LIST;
            x = 0.3;
            y = 0.15;
            w = 0.6;
            h = 0.6;
        };
        
        class ButtonLoadout: RscButton
        {
            idc = IDC_BUTTON_LOADOUT;
            text = "Loadout";
            x = 0.3;
            y = 0.78;
            w = 0.15;
            h = 0.05;
            action = "hint 'Loadout button pressed';";
        };
        
        class ButtonClear: RscButton
        {
            idc = IDC_BUTTON_CLEAR;
            text = "Clear";
            x = 0.45;
            y = 0.78;
            w = 0.15;
            h = 0.05;
            action = "hint 'Clear button pressed';";
        };
    };
};
