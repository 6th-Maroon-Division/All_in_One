class CfgPatches 
{
	//6MD Custom Insignia
    class A6MD_All_in_One_animation
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
			"ace_interact_menu",
			"ace_interaction",
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Modules_F_Curator",
			"ace_Gestures",
			"A6MD_All_in_One_core"
		};
        requiredVersion = 0.1;
    };
};


class cfgVehicles {
	//Give the "Bird"
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Demsoft6MD_GiveTheBird {
				displayName = "Give the Bird";
				condition = "currentweapon player isEqualTo ''";
				statement = "player playaction 'Demsoft6MD_GiveTheBird'";
				showDisabled = 0;
				priority = 3;
				icon = "\z\ace\addons\interaction\UI\dot_ca.paa";
			};
		};
	};
};


class CfgMovesBasic {
	class ManActions {
		Demsoft6MD_GiveTheBird = "Demsoft6MD_GiveTheBird";
	};
	class Actions {
		class NoActions: ManActions {
			Demsoft6MD_GiveTheBird[] = {
				"Demsoft6MD_GiveTheBird",
				"Gesture"
			};
		};
	};
};

class CfgGesturesMale {
	class States {
		class ace_Gestures_forward;
		class Demsoft6MD_GiveTheBird: ace_Gestures_forward {
			file="\A6MD\All_in_One\addons\animation\anim\dat_bird.rtm";
			looped = 0;
			speed = 0.62051;
			mask = "handsWeapon_pst";
			headBobStrength = 0.4;
			headBobMode = 2;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
	};
};