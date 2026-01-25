# 1 "data/maps/MtMoon_1F/scripts.pory"

# 2 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_MapScripts::
# 3 "data/maps/MtMoon_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
# 4 "data/maps/MtMoon_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MtMoon_1F/scripts.pory"

# 6 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_OnTransition::
# 7 "data/maps/MtMoon_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
# 8 "data/maps/MtMoon_1F/scripts.pory"
	end
# 9 "data/maps/MtMoon_1F/scripts.pory"

# 10 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_ZubatSign::
# 11 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
# 12 "data/maps/MtMoon_1F/scripts.pory"
	end
# 13 "data/maps/MtMoon_1F/scripts.pory"

# 14 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Marcos::
# 15 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
# 16 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/MtMoon_1F/scripts.pory"
	end
# 18 "data/maps/MtMoon_1F/scripts.pory"

# 19 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Josh::
# 20 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
# 21 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/MtMoon_1F/scripts.pory"
	end
# 23 "data/maps/MtMoon_1F/scripts.pory"

# 24 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Miriam::
# 25 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
# 26 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/MtMoon_1F/scripts.pory"
	end
# 28 "data/maps/MtMoon_1F/scripts.pory"

# 29 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Iris::
# 30 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
# 31 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/MtMoon_1F/scripts.pory"
	end
# 33 "data/maps/MtMoon_1F/scripts.pory"

# 34 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Kent::
# 35 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
# 36 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/MtMoon_1F/scripts.pory"
	end
# 38 "data/maps/MtMoon_1F/scripts.pory"

# 39 "data/maps/MtMoon_1F/scripts.pory"
MtMoon_1F_EventScript_Robby::
# 40 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
# 41 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/MtMoon_1F/scripts.pory"
	end

MtMoon_1F_EventScript_Joseph::
# 47 "data/maps/MtMoon_1F/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_JOSEPH, MtMoon_1F_Text_JosephIntro, MtMoon_1F_Text_JosephDefeat
# 48 "data/maps/MtMoon_1F/scripts.pory"
	msgbox MtMoon_1F_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/MtMoon_1F/scripts.pory"
	waitmessage
	end


Universal_Eventscript_Nurse::
# 66 "data/maps/MtMoon_1F/scripts.pory"
	lockall
# 67 "data/maps/MtMoon_1F/scripts.pory"
	faceplayer
# 68 "data/maps/MtMoon_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 69 "data/maps/MtMoon_1F/scripts.pory"
	msgbox Universal_Eventscript_Nurse_Text_0, MSGBOX_YESNO
# 70 "data/maps/MtMoon_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Universal_Eventscript_HealParty
# 71 "data/maps/MtMoon_1F/scripts.pory"
	msgbox Universal_Eventscript_Nurse_Text_1
# 72 "data/maps/MtMoon_1F/scripts.pory"
	releaseall
	return


Universal_Eventscript_HealParty::
# 76 "data/maps/MtMoon_1F/scripts.pory"
	lockall
# 77 "data/maps/MtMoon_1F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 78 "data/maps/MtMoon_1F/scripts.pory"
	msgbox Universal_Eventscript_Nurse_Text_1
# 79 "data/maps/MtMoon_1F/scripts.pory"
	closemessage
# 80 "data/maps/MtMoon_1F/scripts.pory"
	releaseall
	return


Universal_EventScript_NurseChansey::
# 84 "data/maps/MtMoon_1F/scripts.pory"
	lockall
# 85 "data/maps/MtMoon_1F/scripts.pory"
	faceplayer
# 86 "data/maps/MtMoon_1F/scripts.pory"
	message Universal_EventScript_NurseChansey_Text_0
# 87 "data/maps/MtMoon_1F/scripts.pory"
	waitmessage
# 88 "data/maps/MtMoon_1F/scripts.pory"
	delay 12
# 89 "data/maps/MtMoon_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LUCKY_EGG, Universal_EventScript_GiveLuckyEgg
# 90 "data/maps/MtMoon_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_LUCKY_EGG, Universal_EventScript_NurseChanseyGreeting
# 91 "data/maps/MtMoon_1F/scripts.pory"
	releaseall
	return


Universal_EventScript_GiveLuckyEgg::
# 95 "data/maps/MtMoon_1F/scripts.pory"
	giveitem ITEM_LUCKY_EGG, amount = 1
# 96 "data/maps/MtMoon_1F/scripts.pory"
	setflag FLAG_RECEIVED_LUCKY_EGG
# 97 "data/maps/MtMoon_1F/scripts.pory"
	releaseall
	return


Universal_EventScript_NurseChanseyGreeting::
# 101 "data/maps/MtMoon_1F/scripts.pory"
	lockall
# 102 "data/maps/MtMoon_1F/scripts.pory"
	message Universal_EventScript_NurseChansey_Text_0
# 103 "data/maps/MtMoon_1F/scripts.pory"
	waitmessage
# 104 "data/maps/MtMoon_1F/scripts.pory"
	delay 10
# 105 "data/maps/MtMoon_1F/scripts.pory"
	closemessage
# 106 "data/maps/MtMoon_1F/scripts.pory"
	releaseall
	return


Universal_Eventscript_Nurse_Text_0:
# 69 "data/maps/MtMoon_1F/scripts.pory"
	.string "Would you like me to heal your\n"
	.string "party?$"

Universal_Eventscript_Nurse_Text_1:
# 71 "data/maps/MtMoon_1F/scripts.pory"
	.string "Come back any time.$"

Universal_EventScript_NurseChansey_Text_0:
# 86 "data/maps/MtMoon_1F/scripts.pory"
	.string "Chaans!$"

MtMoon_1F_Text_JosephIntro::
# 53 "data/maps/MtMoon_1F/scripts.pory"
	.string "Heavenly!$"

MtMoon_1F_Text_JosephDefeat::
# 57 "data/maps/MtMoon_1F/scripts.pory"
	.string "My POKéMON won't do!$"

MtMoon_1F_Text_JosephPostBattle::
# 61 "data/maps/MtMoon_1F/scripts.pory"
	.string "I have to find stronger POKéMON.\n"
	.string "Where might they be?$"
