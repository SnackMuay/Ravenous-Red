# 1 "data/maps/SSAnne_Deck/scripts.pory"

# 2 "data/maps/SSAnne_Deck/scripts.pory"

# 3 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_MapScripts::
# 4 "data/maps/SSAnne_Deck/scripts.pory"
	.byte 0
# 5 "data/maps/SSAnne_Deck/scripts.pory"

# 6 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Youngster::
# 7 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ShipDepartingSoon, MSGBOX_NPC
# 8 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 9 "data/maps/SSAnne_Deck/scripts.pory"

# 10 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_BaldingMan::
# 11 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_FeelSeasick, MSGBOX_NPC
# 12 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 13 "data/maps/SSAnne_Deck/scripts.pory"

# 14 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Sailor::
# 15 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ScrubbingDecksHardWork, MSGBOX_NPC
# 16 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 17 "data/maps/SSAnne_Deck/scripts.pory"

# 18 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Edmond::
# 19 "data/maps/SSAnne_Deck/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_EDMOND, SSAnne_Deck_Text_EdmondIntro, SSAnne_Deck_Text_EdmondDefeat
# 20 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 22 "data/maps/SSAnne_Deck/scripts.pory"

# 23 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Trevor::
# 24 "data/maps/SSAnne_Deck/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_TREVOR, SSAnne_Deck_Text_TrevorIntro, SSAnne_Deck_Text_TrevorDefeat
# 25 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/SSAnne_Deck/scripts.pory"
	end

SSAnne_Deck_EventScript_Tuber::
# 31 "data/maps/SSAnne_Deck/scripts.pory"
	lockall
# 32 "data/maps/SSAnne_Deck/scripts.pory"
	faceplayer
# 33 "data/maps/SSAnne_Deck/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WATER_GEM_SS_ANNE, SSAnne_Deck_EventScript_GetWaterGem
# 34 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_EventScript_Tuber_Text_0
# 35 "data/maps/SSAnne_Deck/scripts.pory"
	releaseall
	return


SSAnne_Deck_EventScript_GetWaterGem::
# 39 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_EventScript_GetWaterGem_Text_0
# 41 "data/maps/SSAnne_Deck/scripts.pory"
	giveitem ITEM_WATER_GEM, amount = 1
# 42 "data/maps/SSAnne_Deck/scripts.pory"
	setflag FLAG_RECEIVED_WATER_GEM_SS_ANNE
# 43 "data/maps/SSAnne_Deck/scripts.pory"
	releaseall
	return


SSAnne_Deck_EventScript_Tuber_Text_0:
# 34 "data/maps/SSAnne_Deck/scripts.pory"
	.string "That gem can power up a\n"
	.string "WATER-type attack, but you can\l"
	.string "only use it once.$"

SSAnne_Deck_EventScript_GetWaterGem_Text_0:
# 39 "data/maps/SSAnne_Deck/scripts.pory"
	.string "I don't know what I'm supposed to\n"
	.string "do with this crystal. You look like\l"
	.string "you'd know what to do with it.$"
