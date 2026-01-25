Route4_MapScripts::
# 2 "data/maps/Route4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
	.byte 0


Route4_OnTransition::
# 6 "data/maps/Route4/scripts.pory"
	setflag FLAG_HIDE_MAY_ROUTE_4
	return


# 9 "data/maps/Route4/scripts.pory"

# 10 "data/maps/Route4/scripts.pory"
Route4_EventScript_Unused::
# 11 "data/maps/Route4/scripts.pory"
	end
# 12 "data/maps/Route4/scripts.pory"

# 13 "data/maps/Route4/scripts.pory"
Route4_EventScript_Woman::
# 14 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_TrippedOverGeodude, MSGBOX_NPC
# 15 "data/maps/Route4/scripts.pory"
	end
# 16 "data/maps/Route4/scripts.pory"

# 17 "data/maps/Route4/scripts.pory"
Route4_EventScript_MtMoonSign::
# 18 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_MtMoonEntrance, MSGBOX_SIGN
# 19 "data/maps/Route4/scripts.pory"
	end
# 20 "data/maps/Route4/scripts.pory"

# 21 "data/maps/Route4/scripts.pory"
Route4_EventScript_RouteSign::
# 22 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RouteSign, MSGBOX_SIGN
# 23 "data/maps/Route4/scripts.pory"
	end

Route4_EventScript_Psyduck::
# 28 "data/maps/Route4/scripts.pory"
	lock
# 29 "data/maps/Route4/scripts.pory"
	faceplayer
# 30 "data/maps/Route4/scripts.pory"
	waitse
# 31 "data/maps/Route4/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 32 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Psyduck_Text_0
# 33 "data/maps/Route4/scripts.pory"
	waitmoncry
# 34 "data/maps/Route4/scripts.pory"
	release
	end


Route4_EventScript_Cubone::
# 39 "data/maps/Route4/scripts.pory"
	lock
# 40 "data/maps/Route4/scripts.pory"
	faceplayer
# 41 "data/maps/Route4/scripts.pory"
	waitse
# 42 "data/maps/Route4/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 43 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_Cubone_Text_0
# 44 "data/maps/Route4/scripts.pory"
	waitmoncry
# 45 "data/maps/Route4/scripts.pory"
	release
	end


Route4_Trigger_May::
# 51 "data/maps/Route4/scripts.pory"
	lockall
# 52 "data/maps/Route4/scripts.pory"
	opendoor 12, 5
# 53 "data/maps/Route4/scripts.pory"
	waitdooranim
# 54 "data/maps/Route4/scripts.pory"
	addobject LOCALID_MAY_2
# 55 "data/maps/Route4/scripts.pory"
	clearflag FLAG_HIDE_MAY_ROUTE_4
# 56 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_MAY_2, May_ExitPC
# 57 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route4/scripts.pory"
	closedoor 12, 5
# 59 "data/maps/Route4/scripts.pory"
	waitdooranim
# 60 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_MAY_2, May_Approach
# 61 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route4/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route4_EventScript_May_Charmander
# 63 "data/maps/Route4/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route4_EventScript_May_Piplup
# 64 "data/maps/Route4/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route4_EventScript_May_Chikorita
# 65 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_EventScript_May_Chikorita::
# 69 "data/maps/Route4/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 70 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_4_MAY_CHIKORITA, May_2_Intro, May_2_Outro, May_2_Defeat
# 71 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_EventScript_May_Piplup::
# 75 "data/maps/Route4/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 76 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_4_MAY_PIPLUP, May_2_Intro, May_2_Outro, May_2_Defeat
# 77 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_EventScript_May_Charmander::
# 81 "data/maps/Route4/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 82 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_4_MAY_CHARMANDER, May_2_Intro, May_2_Outro, May_2_Defeat
# 83 "data/maps/Route4/scripts.pory"
	releaseall
	return


May_2_Defeat::
# 87 "data/maps/Route4/scripts.pory"
	lockall
# 88 "data/maps/Route4/scripts.pory"
	msgbox May_2_Defeat_Text_0
# 89 "data/maps/Route4/scripts.pory"
	waitmessage
# 90 "data/maps/Route4/scripts.pory"
	applymovement LOCALID_MAY_2, May_Depart
# 91 "data/maps/Route4/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route4/scripts.pory"
	removeobject LOCALID_MAY_2
# 93 "data/maps/Route4/scripts.pory"
	setvar VAR_ROUTE_4_MAY, 1
# 94 "data/maps/Route4/scripts.pory"
	setflag FLAG_MAY_DEFEATED_ROUTE_4
# 95 "data/maps/Route4/scripts.pory"
	setflag FLAG_HIDE_MAY_ROUTE_4
# 96 "data/maps/Route4/scripts.pory"
	releaseall
	return


# 107 "data/maps/Route4/scripts.pory"
May_Appear:
# 108 "data/maps/Route4/scripts.pory"
	walk_down
# 108 "data/maps/Route4/scripts.pory"
	walk_down
# 108 "data/maps/Route4/scripts.pory"
	walk_down
# 108 "data/maps/Route4/scripts.pory"
	walk_down
# 108 "data/maps/Route4/scripts.pory"
	walk_down
# 108 "data/maps/Route4/scripts.pory"
	walk_down
# 108 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

# 111 "data/maps/Route4/scripts.pory"
May_ExitPC:
# 112 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

# 115 "data/maps/Route4/scripts.pory"
May_Approach:
# 116 "data/maps/Route4/scripts.pory"
	walk_right
# 116 "data/maps/Route4/scripts.pory"
	walk_right
# 116 "data/maps/Route4/scripts.pory"
	walk_right
# 116 "data/maps/Route4/scripts.pory"
	walk_right
# 116 "data/maps/Route4/scripts.pory"
	walk_right
# 116 "data/maps/Route4/scripts.pory"
	walk_right
	step_end

# 119 "data/maps/Route4/scripts.pory"
May_Depart:
# 120 "data/maps/Route4/scripts.pory"
	walk_left
# 120 "data/maps/Route4/scripts.pory"
	walk_left
# 120 "data/maps/Route4/scripts.pory"
	walk_left
# 120 "data/maps/Route4/scripts.pory"
	walk_left
# 120 "data/maps/Route4/scripts.pory"
	walk_left
# 121 "data/maps/Route4/scripts.pory"
	walk_down
# 121 "data/maps/Route4/scripts.pory"
	walk_down
# 121 "data/maps/Route4/scripts.pory"
	walk_down
# 121 "data/maps/Route4/scripts.pory"
	walk_down
# 121 "data/maps/Route4/scripts.pory"
	walk_down
# 121 "data/maps/Route4/scripts.pory"
	walk_down
# 121 "data/maps/Route4/scripts.pory"
	walk_down
	step_end

Route4_EventScript_Psyduck_Text_0:
# 32 "data/maps/Route4/scripts.pory"
	.string "Psy!$"

Route4_EventScript_Cubone_Text_0:
# 43 "data/maps/Route4/scripts.pory"
	.string "Cuuu!$"

May_2_Defeat_Text_0:
# 88 "data/maps/Route4/scripts.pory"
	.string "You're the luckiest TRAINER I've\n"
	.string "encountered. What a waste of time.$"

May_2_Intro::
# 99 "data/maps/Route4/scripts.pory"
	.string "You're here too? That's impressive\n"
	.string "for someone like you. Let's see if\l"
	.string "you've improved at all.$"

May_2_Outro::
# 103 "data/maps/Route4/scripts.pory"
	.string "Still as lucky as ever.$"
