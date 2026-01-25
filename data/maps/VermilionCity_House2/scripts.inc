# 1 "data/maps/VermilionCity_House2/scripts.pory"

# 2 "data/maps/VermilionCity_House2/scripts.pory"

# 3 "data/maps/VermilionCity_House2/scripts.pory"
VermilionCity_House2_MapScripts::
# 4 "data/maps/VermilionCity_House2/scripts.pory"
	.byte 0
# 5 "data/maps/VermilionCity_House2/scripts.pory"

# 6 "data/maps/VermilionCity_House2/scripts.pory"
VermilionCity_House2_EventScript_Elyssa::
# 7 "data/maps/VermilionCity_House2/scripts.pory"
	lock
# 8 "data/maps/VermilionCity_House2/scripts.pory"
	faceplayer
# 9 "data/maps/VermilionCity_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_FARFETCHD
# 10 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 11 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_set FLAG_DID_CH_DING_TRADE, VermilionCity_House2_EventScript_AlreadyTraded
# 12 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_DoYouHaveMonWantToTradeForMyMon, MSGBOX_YESNO
# 13 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_House2_EventScript_DeclineTrade
# 14 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 15 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, VermilionCity_House2_EventScript_DeclineTrade
# 16 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 17 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, VermilionCity_House2_EventScript_NotRequestedMon
# 18 "data/maps/VermilionCity_House2/scripts.pory"
	call EventScript_DoInGameTrade
# 19 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_ThankYou
# 20 "data/maps/VermilionCity_House2/scripts.pory"
	setflag FLAG_DID_CH_DING_TRADE
# 21 "data/maps/VermilionCity_House2/scripts.pory"
	release
# 22 "data/maps/VermilionCity_House2/scripts.pory"
	end
# 23 "data/maps/VermilionCity_House2/scripts.pory"

# 24 "data/maps/VermilionCity_House2/scripts.pory"
VermilionCity_House2_EventScript_DeclineTrade::
# 25 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_ThatsTooBad
# 26 "data/maps/VermilionCity_House2/scripts.pory"
	release
# 27 "data/maps/VermilionCity_House2/scripts.pory"
	end
# 28 "data/maps/VermilionCity_House2/scripts.pory"

# 29 "data/maps/VermilionCity_House2/scripts.pory"
VermilionCity_House2_EventScript_NotRequestedMon::
# 30 "data/maps/VermilionCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 31 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_ThisIsNoMon
# 32 "data/maps/VermilionCity_House2/scripts.pory"
	release
# 33 "data/maps/VermilionCity_House2/scripts.pory"
	end
# 34 "data/maps/VermilionCity_House2/scripts.pory"

# 35 "data/maps/VermilionCity_House2/scripts.pory"
VermilionCity_House2_EventScript_AlreadyTraded::
# 36 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_Text_HowIsMyOldMon
# 37 "data/maps/VermilionCity_House2/scripts.pory"
	release
# 38 "data/maps/VermilionCity_House2/scripts.pory"
	end

VermilionCity_House2_EventScript_Captain::
# 43 "data/maps/VermilionCity_House2/scripts.pory"
	lockall
# 44 "data/maps/VermilionCity_House2/scripts.pory"
	faceplayer
# 45 "data/maps/VermilionCity_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WATER_STONE_VERMILION, VermilionCity_House2_EventScript_GetWaterStone
# 46 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_EventScript_Captain_Text_0
# 47 "data/maps/VermilionCity_House2/scripts.pory"
	releaseall
	return


VermilionCity_House2_EventScript_GetWaterStone::
# 51 "data/maps/VermilionCity_House2/scripts.pory"
	msgbox VermilionCity_House2_EventScript_GetWaterStone_Text_0
# 53 "data/maps/VermilionCity_House2/scripts.pory"
	giveitem ITEM_WATER_STONE, amount = 1
# 54 "data/maps/VermilionCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_WATER_STONE_VERMILION
# 55 "data/maps/VermilionCity_House2/scripts.pory"
	releaseall
	return


VermilionCity_House2_EventScript_Captain_Text_0:
# 46 "data/maps/VermilionCity_House2/scripts.pory"
	.string "WATER STONES can be used to\n"
	.string "EVOLVE certain POKéMON.$"

VermilionCity_House2_EventScript_GetWaterStone_Text_0:
# 51 "data/maps/VermilionCity_House2/scripts.pory"
	.string "I love using WATER-type POKéMON,\n"
	.string "but not all of them can EVOLVE by\l"
	.string "leveling up. If you run into that\l"
	.string "problem yourself, you can try\l"
	.string "this:$"
