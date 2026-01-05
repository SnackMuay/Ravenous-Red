CeruleanCity_Gym_MapScripts::
# 2 "data/maps/CeruleanCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_Gym_OnTransition
	.byte 0


CeruleanCity_Gym_OnTransition::
# 6 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_OnTransition_2
# 16 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SWIMMER_FEMALE_DIANA
# 17 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SWIMMER_MALE_LUIS
# 18 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SAILOR_GRAYSON
# 19 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SAILOR_DEEJAY
# 20 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SWIMMER_FEMALE_ARIEL
# 21 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SWIMMER_FEMALE_HARPER
# 22 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SWIMMER_MALE_CHANCE
CeruleanCity_Gym_OnTransition_1:
# 24 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
	return

CeruleanCity_Gym_OnTransition_2:
# 7 "data/maps/CeruleanCity_Gym/scripts.pory"
	settrainerflag TRAINER_SWIMMER_FEMALE_DIANA
# 8 "data/maps/CeruleanCity_Gym/scripts.pory"
	settrainerflag TRAINER_SWIMMER_MALE_LUIS
# 9 "data/maps/CeruleanCity_Gym/scripts.pory"
	settrainerflag TRAINER_SAILOR_GRAYSON
# 10 "data/maps/CeruleanCity_Gym/scripts.pory"
	settrainerflag TRAINER_SAILOR_DEEJAY
# 11 "data/maps/CeruleanCity_Gym/scripts.pory"
	settrainerflag TRAINER_SWIMMER_FEMALE_ARIEL
# 12 "data/maps/CeruleanCity_Gym/scripts.pory"
	settrainerflag TRAINER_SWIMMER_FEMALE_HARPER
# 13 "data/maps/CeruleanCity_Gym/scripts.pory"
	settrainerflag TRAINER_SWIMMER_MALE_CHANCE
	goto CeruleanCity_Gym_OnTransition_1


# 27 "data/maps/CeruleanCity_Gym/scripts.pory"

# 28 "data/maps/CeruleanCity_Gym/scripts.pory"

# 29 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_Misty::
# 30 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 31 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 32 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 33 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 34 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 35 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 36 "data/maps/CeruleanCity_Gym/scripts.pory"

# 37 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_MistyDefeated::
# 38 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 39 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 40 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 41 "data/maps/CeruleanCity_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 42 "data/maps/CeruleanCity_Gym/scripts.pory"
	set_gym_trainers 2
# 43 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
# 44 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 45 "data/maps/CeruleanCity_Gym/scripts.pory"

# 46 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03::
# 47 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 48 "data/maps/CeruleanCity_Gym/scripts.pory"
	checkitemspace ITEM_TM03
# 49 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
# 50 "data/maps/CeruleanCity_Gym/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 51 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 52 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 53 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 54 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 55 "data/maps/CeruleanCity_Gym/scripts.pory"

# 56 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 57 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 58 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 59 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 60 "data/maps/CeruleanCity_Gym/scripts.pory"

# 61 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy::
# 62 "data/maps/CeruleanCity_Gym/scripts.pory"
	lock
# 63 "data/maps/CeruleanCity_Gym/scripts.pory"
	faceplayer
# 64 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 65 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 66 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 67 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 68 "data/maps/CeruleanCity_Gym/scripts.pory"

# 69 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 70 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 71 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 72 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 73 "data/maps/CeruleanCity_Gym/scripts.pory"

# 74 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue::
# 75 "data/maps/CeruleanCity_Gym/scripts.pory"
	lockall
# 76 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
# 77 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
# 78 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
# 79 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 80 "data/maps/CeruleanCity_Gym/scripts.pory"

# 81 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 82 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 83 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
# 84 "data/maps/CeruleanCity_Gym/scripts.pory"
	end

CeruleanCity_Gym_EventScript_Diana::
# 90 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 91 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
# 92 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_Luis::
# 97 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 98 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 99 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
# 100 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_Grayson::
# 105 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_GRAYSON, Grayson_Intro, Grayson_Outro
# 106 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
# 107 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox Grayson_PostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_Deejay::
# 124 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DEEJAY, Deejay_Intro, Deejay_Outro
# 125 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
# 126 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox Deejay_PostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_Ariel::
# 143 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_ARIEL, Ariel_Intro, Ariel_Outro
# 144 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
# 145 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox Ariel_PostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_Harper::
# 162 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_HARPER, Harper_Intro, Harper_Outro
# 163 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
# 164 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox Harper_PostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_Chance::
# 181 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_CHANCE, Chance_Intro, Chance_Outro
# 182 "data/maps/CeruleanCity_Gym/scripts.pory"
	special HealPlayerParty
# 183 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox Chance_PostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_BodyGuard::
# 200 "data/maps/CeruleanCity_Gym/scripts.pory"
	lockall
# 201 "data/maps/CeruleanCity_Gym/scripts.pory"
	faceplayer
# 202 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_EventScript_BodyGuard_Text_0
# 203 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
	return


CeruleanCity_Gym_EventScript_BodyGuard_Text_0:
# 202 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "MISTY doesn't need our\n"
	.string "protection. She's the most\l"
	.string "formidable TRAINER I've ever met.$"

Grayson_Intro::
# 111 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Prepare for a splash!$"

Grayson_Outro::
# 115 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Well done.$"

Grayson_PostBattle::
# 119 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Don't get cocky. MISTY has\n"
	.string "mastered WATER POKéMON to a\l"
	.string "greater extent than anyone in\l"
	.string "this GYM.$"

Deejay_Intro::
# 130 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "We'll drag you into deep waters!$"

Deejay_Outro::
# 134 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "We've been sunk.$"

Deejay_PostBattle::
# 138 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Choose your path wisely. Each\n"
	.string "trainer en route to MISTY\l"
	.string "presents a unique challenge.$"

Ariel_Intro::
# 149 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Finally! It's time to battle!$"

Ariel_Outro::
# 153 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Even a loss provides such a rush\n"
	.string "of excitement.$"

Ariel_PostBattle::
# 157 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Your POKéMON were splendid! I\n"
	.string "can't wait to see them battle\l"
	.string "against the team MISTY has\l"
	.string "assembled.$"

Harper_Intro::
# 168 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "You think I'll be easy to defeat,\n"
	.string "huh?$"

Harper_Outro::
# 172 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Your assessment of me was...\n"
	.string "correct.$"

Harper_PostBattle::
# 176 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "I've let MISTY down, but she\n"
	.string "doesn't need my help anyway.$"

Chance_Intro::
# 187 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Here goes!$"

Chance_Outro::
# 191 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "I can't be upset having lost to a\n"
	.string "TRAINER of your caliber.$"

Chance_PostBattle::
# 195 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "That was my best effort. You've\n"
	.string "proven that you're worthy to\l"
	.string "challenge this GYM's LEADER.$"
