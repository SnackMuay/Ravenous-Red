# 1 "data/maps/Route6/scripts.pory"

# 2 "data/maps/Route6/scripts.pory"

# 3 "data/maps/Route6/scripts.pory"
Route6_MapScripts::
# 4 "data/maps/Route6/scripts.pory"
	.byte 0
# 5 "data/maps/Route6/scripts.pory"

# 6 "data/maps/Route6/scripts.pory"
Route6_EventScript_UndergroundPathSign::
# 7 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_UndergroundPathSign, MSGBOX_SIGN
# 8 "data/maps/Route6/scripts.pory"
	end

Route6_EventScript_Tuber::
# 13 "data/maps/Route6/scripts.pory"
	lockall
# 14 "data/maps/Route6/scripts.pory"
	faceplayer
# 15 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_Tuber_Text_0
# 16 "data/maps/Route6/scripts.pory"
	releaseall
	return


Route6_EventScript_AromaLady::
# 20 "data/maps/Route6/scripts.pory"
	lockall
# 21 "data/maps/Route6/scripts.pory"
	faceplayer
# 22 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_AromaLady_Text_0
# 24 "data/maps/Route6/scripts.pory"
	releaseall
	return


Route6_EventScript_OldWoman::
# 28 "data/maps/Route6/scripts.pory"
	lockall
# 29 "data/maps/Route6/scripts.pory"
	faceplayer
# 30 "data/maps/Route6/scripts.pory"
	goto_if_unset FLAG_ROUTE6_OLD_WOMAN_ITEM, Route6_EventScript_GiveOldWoman
# 31 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_OldWoman_Text_0
# 32 "data/maps/Route6/scripts.pory"
	releaseall
	return


Route6_EventScript_GiveOldWoman::
# 36 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_GiveOldWoman_Text_0
# 41 "data/maps/Route6/scripts.pory"
	giveitem ITEM_MASTER_BALL, amount = 1
# 42 "data/maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_OLD_WOMAN_ITEM
# 43 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_GiveOldWoman_Text_1
# 44 "data/maps/Route6/scripts.pory"
	releaseall
	return


Route6_EventScript_TriggerDouble::
# 48 "data/maps/Route6/scripts.pory"
	lockall
# 49 "data/maps/Route6/scripts.pory"
	getpartysize
# 50 "data/maps/Route6/scripts.pory"
	compare VAR_RESULT, 1
# 51 "data/maps/Route6/scripts.pory"
	goto_if_gt Route6_EventScript_TriggerDoubleProceed
# 52 "data/maps/Route6/scripts.pory"
	call Route6_EventScript_SmallParty
# 53 "data/maps/Route6/scripts.pory"
	releaseall
	return


Route6_EventScript_TriggerDoubleProceed::
# 57 "data/maps/Route6/scripts.pory"
	applymovement LOCALID_ROUTE6_RICKY, Route6_WalkRight
# 58 "data/maps/Route6/scripts.pory"
	applymovement LOCALID_ROUTE6_NANCY, Route6_WalkLeft
# 59 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route6/scripts.pory"
	trainerbattle_double TRAINER_CAMPER_BOB_ELLA, BobElla_Intro, BobElla_Outro, BobElla_CantBattle, Route6_EventScript_TriggerDouble_Cont
# 61 "data/maps/Route6/scripts.pory"
	releaseall
	return


Route6_EventScript_TriggerDouble_Cont::
# 65 "data/maps/Route6/scripts.pory"
	applymovement LOCALID_ROUTE6_ISABELLE, Route6_WalkRight
# 66 "data/maps/Route6/scripts.pory"
	applymovement LOCALID_ROUTE6_JEFF, Route6_WalkLeft
# 67 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route6/scripts.pory"
	trainerbattle_double TRAINER_PICNICKER_KARA_JOE, KaraJoe_Intro, KaraJoe_Outro, KaraJoe_CantBattle, Route6_EventScript_DoublesComplete
	return


Route6_EventScript_DoublesComplete::
# 72 "data/maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_DOUBLE, 1
# 73 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_DoublesComplete_Text_0
# 74 "data/maps/Route6/scripts.pory"
	releaseall
	return


Route6_EventScript_SmallParty::
# 78 "data/maps/Route6/scripts.pory"
	lockall
# 79 "data/maps/Route6/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 80 "data/maps/Route6/scripts.pory"
	msgbox Route6_EventScript_SmallParty_Text_0
# 81 "data/maps/Route6/scripts.pory"
	applymovement LOCALID_PLAYER, Route6_WalkAway
# 82 "data/maps/Route6/scripts.pory"
	releaseall
	return


# 85 "data/maps/Route6/scripts.pory"
Route6_WalkRight:
# 86 "data/maps/Route6/scripts.pory"
	walk_right
	step_end

# 89 "data/maps/Route6/scripts.pory"
Route6_WalkLeft:
# 90 "data/maps/Route6/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/Route6/scripts.pory"
Route6_WalkAway:
# 94 "data/maps/Route6/scripts.pory"
	walk_up
	step_end

Route6_EventScript_Tuber_Text_0:
# 15 "data/maps/Route6/scripts.pory"
	.string "I swam here from VERMILION CITY\n"
	.string "but now I'm too tired to get back.$"

Route6_EventScript_AromaLady_Text_0:
# 22 "data/maps/Route6/scripts.pory"
	.string "I live in VERMILION CITY but the\n"
	.string "air there is so salty from the sea\l"
	.string "breeze. I prefer more floral\l"
	.string "scents.$"

Route6_EventScript_OldWoman_Text_0:
# 31 "data/maps/Route6/scripts.pory"
	.string "Remember; our time is always\n"
	.string "limited, even when we don't realize\l"
	.string "it.$"

Route6_EventScript_GiveOldWoman_Text_0:
# 36 "data/maps/Route6/scripts.pory"
	.string "The falling sand here in SANDSWEPT\n"
	.string "CAVERN always leaves me\l"
	.string "breathless. I can't help but\l"
	.string "imagine the grains of sand in an\l"
	.string "hourglass slowly dwindling as time\l"
	.string "marches forward. Sooner than you\l"
	.string "realize, you'll be my age. My\l"
	.string "favorite POKéMON MOVE perfectly\l"
	.string "encapsulates this theme as well.\l"
	.string "You ought to try it yourself.$"

Route6_EventScript_GiveOldWoman_Text_1:
# 43 "data/maps/Route6/scripts.pory"
	.string "That TM contains PERISH SONG.\n"
	.string "Remember; our time is always\l"
	.string "limited, even when we don't realize\l"
	.string "it.$"

Route6_EventScript_DoublesComplete_Text_0:
# 73 "data/maps/Route6/scripts.pory"
	.string "Even the four of us aren't skilled\n"
	.string "enough to take you on.$"

Route6_EventScript_SmallParty_Text_0:
# 80 "data/maps/Route6/scripts.pory"
	.string "Stop right there! You need more\n"
	.string "POKéMON if you're going to\l"
	.string "challenge us!$"

BobElla_Intro::
# 97 "data/maps/Route6/scripts.pory"
	.string "If you want to get past us, you'd\n"
	.string "better be prepared for the fight\l"
	.string "of your life!$"

BobElla_Outro::
# 101 "data/maps/Route6/scripts.pory"
	.string "You made that look easy, but we\n"
	.string "aren't done yet!$"

BobElla_CantBattle::
# 105 "data/maps/Route6/scripts.pory"
	.string "Stop right there! You need more\n"
	.string "POKéMON if you're going to\l"
	.string "challenge us!$"

KaraJoe_Intro::
# 109 "data/maps/Route6/scripts.pory"
	.string "...$"

KaraJoe_Outro::
# 113 "data/maps/Route6/scripts.pory"
	.string "...$"

KaraJoe_CantBattle::
# 117 "data/maps/Route6/scripts.pory"
	.string "...$"

Route6_Text_RickyPostBattle::
# 121 "data/maps/Route6/scripts.pory"
	.string "...$"

Route6_Text_JeffPostBattle::
# 125 "data/maps/Route6/scripts.pory"
	.string "...$"

Route6_Text_NancyPostBattle::
# 129 "data/maps/Route6/scripts.pory"
	.string "...$"

Route6_Text_IsabellePostBattle::
# 133 "data/maps/Route6/scripts.pory"
	.string "...$"
