#ifndef script_macros
	#define script_macros
	#include "script_macros.hpp"
#endif
	class B_Soldier_base_F;
	class B_soldier_F: B_Soldier_base_F {
        class EventHandlers;
    };
	class B_officer_F: B_soldier_F {
        class EventHandlers;
    };
	class B_medic_F: B_soldier_F {
        class EventHandlers;
    };
	class B_engineer_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_UAV_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_SL_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_TL_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_GL_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_AR_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_AT_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_LAT_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_A_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_AAT_F: B_soldier_F {
        class EventHandlers;
    };
	class B_soldier_M_F: B_soldier_F {
        class EventHandlers;
    };
	class B_crew_F: B_soldier_F {
        class EventHandlers;
    };
	class B_spotter_F: B_soldier_F {
        class EventHandlers;
    };
	class B_sniper_F: B_soldier_F {
        class EventHandlers;
    };
	class B_Helipilot_F: B_soldier_F {
        class EventHandlers;
    };
	class B_helicrew_F: B_soldier_F {
        class EventHandlers;
    };

    MACRO_UNITB(Zeus,B_officer_F,Zeus)
    MACRO_UNITB(BZeus,B_officer_F,Backup Zeus)
    MACRO_UNITB(PL,B_officer_F,Platoon Leader)
    MACRO_UNITB(PM,B_medic_F,Platoon Medic)
	MACRO_UNITB(PE,B_engineer_F,Platoon Engineer)
	MACRO_UNITB(PUAV,B_soldier_UAV_F,UAV Operator)
	MACRO_UNITB(SL,B_soldier_SL_F,Squad Leader)
	MACRO_UNITB(FTL,B_soldier_TL_F,Fire Team Leader)
	MACRO_UNITB(GL,B_soldier_GL_F,Grenadier)
	MACRO_UNITB(LMG,B_soldier_AR_F,LMG)
	MACRO_UNITB(GPMG,B_soldier_AR_F,GPMG)
	MACRO_UNITB(AB,B_soldier_A_F,Ammo Bearer)
	MACRO_UNITB(R,B_soldier_F,Rifleman)
	MACRO_UNITB(Mark,B_soldier_M_F,Marksman)
	MACRO_UNITB(LAT,B_soldier_LAT_F,Light AT)
	MACRO_UNITB(MAT,B_soldier_AT_F,Medium AT)
	MACRO_UNITB(ATA,B_soldier_AAT_F,AT Assist)
	MACRO_UNITB(Gunner,B_crew_F,Gunner)
	MACRO_UNITB(Driver,B_crew_F,Driver)
	MACRO_UNITB(Commander,B_crew_F,Commander)
	MACRO_UNITB(Sniper,B_sniper_F,Sniper)
	MACRO_UNITB(Spotter,B_spotter_F,Spotter)
	MACRO_UNITB(H_P,B_Helipilot_F,Helicopter Pilot)
	MACRO_UNITB(H_CP,B_Helipilot_F,Helicopter Co-Pilot)
	MACRO_UNITB(H_C,B_helicrew_F,Helicopter Crew)
	MACRO_UNITB(Mort,B_soldier_F,Mortarman)
	MACRO_UNITB(Mortass,B_soldier_F,Mortarman assist)