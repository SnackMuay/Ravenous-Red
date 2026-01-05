PewterCity_Museum_2F_MapScripts::
# 2 "data/maps/PewterCity_Museum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_Museum_2F_OnTransition
	.byte 0


PewterCity_Museum_2F_OnTransition::
# 6 "data/maps/PewterCity_Museum_2F/scripts.pory"
	call_if_unset FLAG_SPOKEN_WITH_SCIENTIST, PewterCity_Museum_HideScientist
	end


PewterCity_Museum_HideScientist::
# 11 "data/maps/PewterCity_Museum_2F/scripts.pory"
	removeobject LOCALID_MUSEUM_SCIENTIST_2F
	return


# 14 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 15 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 16 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_Man::
# 17 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WhatsSpecialAboutMoonStone, MSGBOX_NPC
# 18 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 19 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 20 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_OldMan::
# 21 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BoughtColorTVForMoonLanding, MSGBOX_NPC
# 22 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 23 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 24 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_LittleGirl::
# 25 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AskedDaddyToCatchPikachu, MSGBOX_NPC
# 26 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 27 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 28 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_BaldingMan::
# 29 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PikachuSoonIPromise, MSGBOX_NPC
# 30 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 31 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 32 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_SpaceShuttle::
# 33 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_SpaceShuttle, MSGBOX_SIGN
# 34 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end
# 35 "data/maps/PewterCity_Museum_2F/scripts.pory"

# 36 "data/maps/PewterCity_Museum_2F/scripts.pory"
PewterCity_Museum_2F_EventScript_MoonStone::
# 37 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
# 38 "data/maps/PewterCity_Museum_2F/scripts.pory"
	end

PewterCity_Museum_2F_EventScript_Scientist::
# 43 "data/maps/PewterCity_Museum_2F/scripts.pory"
	lockall
# 44 "data/maps/PewterCity_Museum_2F/scripts.pory"
	faceplayer
# 45 "data/maps/PewterCity_Museum_2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HEAVY_DUTY_BOOTS, PewterMuseum_GiveBoots
# 46 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_EventScript_Scientist_Text_0
# 47 "data/maps/PewterCity_Museum_2F/scripts.pory"
	releaseall
	return


PewterMuseum_GiveBoots::
# 51 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterMuseum_GiveBoots_Text_0
# 53 "data/maps/PewterCity_Museum_2F/scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS, amount = 1
# 54 "data/maps/PewterCity_Museum_2F/scripts.pory"
	setflag FLAG_RECEIVED_HEAVY_DUTY_BOOTS
# 55 "data/maps/PewterCity_Museum_2F/scripts.pory"
	msgbox PewterCity_Museum_2F_EventScript_Scientist_Text_0
# 56 "data/maps/PewterCity_Museum_2F/scripts.pory"
	releaseall
	return


PewterCity_Museum_2F_EventScript_Scientist_Text_0:
# 46 "data/maps/PewterCity_Museum_2F/scripts.pory"
	.string "Those boots protect a POKéMON\n"
	.string "from hazards on the field when the\l"
	.string "holder enters a battle.$"

PewterMuseum_GiveBoots_Text_0:
# 51 "data/maps/PewterCity_Museum_2F/scripts.pory"
	.string "Here's something I've been\n"
	.string "developing for a POKéMON to hold\l"
	.string "during battle. A skilled TRAINER\l"
	.string "like yourself can surely make\l"
	.string "better use of it than I could.$"
