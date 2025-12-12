ViridianCity_Gym_MapScripts::
# 2 "data/maps/ViridianCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition
	.byte 0


OnTransition::
# 6 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, OnTransition_2
# 17 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINER_COLETTE
# 18 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_BUG_CATCHER_ATSUSHI
# 19 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_BLACK_BELT_KIYO
# 20 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_BLACK_BELT_TAKASHI
# 21 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINER_SAMUEL
# 22 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_CAMPER_YUJI
# 23 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINER_WARREN
# 24 "data/maps/ViridianCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_BUG_CATCHER_JASON
OnTransition_1:
# 26 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
	return

OnTransition_2:
# 7 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_COOLTRAINER_COLETTE
# 8 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_ATSUSHI
# 9 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_BLACK_BELT_KIYO
# 10 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_BLACK_BELT_TAKASHI
# 11 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_COOLTRAINER_SAMUEL
# 12 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_CAMPER_YUJI
# 13 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_COOLTRAINER_WARREN
# 14 "data/maps/ViridianCity_Gym/scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_JASON
	goto OnTransition_1


# 41 "data/maps/ViridianCity_Gym/scripts.pory"

# 42 "data/maps/ViridianCity_Gym/scripts.pory"

# 43 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Bugsy::
# 44 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BUGSY, ViridianCity_Gym_Text_BugsyIntro, ViridianCity_Gym_Text_BugsyDefeat, ViridianCity_Gym_EventScript_DefeatedBugsy, NO_MUSIC
# 45 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_BUGSY, ViridianCity_Gym_EventScript_GiveTM26
# 46 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_BugsyPostBattle
# 47 "data/maps/ViridianCity_Gym/scripts.pory"
	closemessage
# 48 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 49 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 50 "data/maps/ViridianCity_Gym/scripts.pory"

# 51 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_DefeatedBugsy::
# 52 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_BUGSY
# 53 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 54 "data/maps/ViridianCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
# 55 "data/maps/ViridianCity_Gym/scripts.pory"
	set_gym_trainers 1
# 56 "data/maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
# 57 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 58 "data/maps/ViridianCity_Gym/scripts.pory"

# 59 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26::
# 60 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 61 "data/maps/ViridianCity_Gym/scripts.pory"
	checkitemspace ITEM_TM26
# 62 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
# 63 "data/maps/ViridianCity_Gym/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromBugsy, ITEM_TM26
# 64 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_BUGSY
# 65 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 66 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 67 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 68 "data/maps/ViridianCity_Gym/scripts.pory"

# 69 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_NoRoomForTM26::
# 70 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 71 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 72 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 73 "data/maps/ViridianCity_Gym/scripts.pory"

# 74 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Jason::
# 75 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 76 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 79 "data/maps/ViridianCity_Gym/scripts.pory"

# 80 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Colette::
# 81 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLETTE, ViridianCity_Gym_Text_ColetteIntro, ViridianCity_Gym_Text_ColetteDefeat
# 82 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColettePostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 85 "data/maps/ViridianCity_Gym/scripts.pory"

# 86 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Atsushi::
# 87 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 88 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 89 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 91 "data/maps/ViridianCity_Gym/scripts.pory"

# 92 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Kiyo::
# 93 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 94 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 95 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 97 "data/maps/ViridianCity_Gym/scripts.pory"

# 98 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Takashi::
# 99 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 100 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 101 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 103 "data/maps/ViridianCity_Gym/scripts.pory"

# 104 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Samuel::
# 105 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 106 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 107 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 109 "data/maps/ViridianCity_Gym/scripts.pory"

# 110 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Yuji::
# 111 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 112 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 113 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 115 "data/maps/ViridianCity_Gym/scripts.pory"

# 116 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Warren::
# 117 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 118 "data/maps/ViridianCity_Gym/scripts.pory"
	special HealPlayerParty
# 119 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 121 "data/maps/ViridianCity_Gym/scripts.pory"

# 122 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy::
# 123 "data/maps/ViridianCity_Gym/scripts.pory"
	lock
# 124 "data/maps/ViridianCity_Gym/scripts.pory"
	faceplayer
# 125 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_BUGSY, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 126 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 127 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 128 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 129 "data/maps/ViridianCity_Gym/scripts.pory"

# 130 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 131 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 132 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 133 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 134 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 135 "data/maps/ViridianCity_Gym/scripts.pory"

# 136 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue::
# 137 "data/maps/ViridianCity_Gym/scripts.pory"
	lockall
# 138 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 139 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 140 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 141 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 142 "data/maps/ViridianCity_Gym/scripts.pory"

# 143 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 144 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 145 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 146 "data/maps/ViridianCity_Gym/scripts.pory"
	end

ViridianCity_Gym_Text_GymGuyAdvice::
# 29 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Here in Kanto, you must defeat all the\n"
	.string "trainers on your path to the LEADER\l"
	.string "before exiting the GYM. If you leave\l"
	.string "this building before taking down\l"
	.string "BUGSY, you'll have to start again from\l"
	.string "the beginning.$"

ViridianCity_Gym_Text_BugsyPostBattle::
# 33 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "I'm eager to track your progress as\n"
	.string "you journey through Kanto. You\l"
	.string "showed me that I still have so much to\l"
	.string "learn about the world of POKéMON.$"

ViridianCity_Gym_Text_BugsyIntro::
# 37 "data/maps/ViridianCity_Gym/scripts.pory"
	.string "Welcome to VIRIDIAN GYM. I strive to\n"
	.string "exhibit the beauty and strength of\l"
	.string "BUG POKéMON when I battle. It's an\l"
	.string "admirable feat to even stand before\l"
	.string "me now. So don't take it too hard if\l"
	.string "you can't win this fight.${PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"
