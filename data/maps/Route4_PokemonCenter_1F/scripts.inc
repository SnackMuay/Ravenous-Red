# 1 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
.equ MAGIKARP_PRICE, 500
# 4 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_MapScripts::
# 6 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_OnTransition
# 7 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_OnTransition::
# 11 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 12 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE4
# 13 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Boy::
# 16 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou, MSGBOX_NPC
# 17 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean
# 22 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 23 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman::
# 26 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 27 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 28 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BOUGHT_MAGIKARP, Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp
# 29 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 30 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 31 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale
# 32 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale
# 33 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 34 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 35 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale::
# 36 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500, MSGBOX_YESNO
# 37 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 38 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale::
# 41 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500, MSGBOX_YESNO
# 42 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 43 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 44 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp::
# 46 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_DeclineMagikarp
# 47 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	checkmoney MAGIKARP_PRICE
# 48 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route4_PokemonCenter_1F_EventScript_NotEnoughMoney
# 49 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 50 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MAGIKARP
# 51 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 52 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty
# 53 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC
# 54 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp
# 55 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 56 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty::
# 58 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 59 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 60 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 61 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 62 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 63 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 64 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	special ChangePokemonNickname
# 65 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitstate
# 66 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 67 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 68 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 69 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC::
# 70 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 71 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 72 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox
# 73 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 75 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	special ChangeBoxPokemonNickname
# 76 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitstate
# 77 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 78 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 79 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TransferMagikarp
# 80 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 81 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 82 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox::
# 83 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_TransferredToPC
# 84 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 85 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 86 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 87 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarp::
# 88 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_TransferredToPC
# 89 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 90 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 91 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 92 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp::
# 93 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 94 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 95 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 96 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 97 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BoughtMagikarp::
# 98 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setflag FLAG_BOUGHT_MAGIKARP
# 99 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 100 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 101 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 102 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_PayForMagikarp::
# 103 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	removemoney MAGIKARP_PRICE
# 104 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 105 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 106 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	message Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp
# 107 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitmessage
# 108 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 109 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 110 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	return
# 111 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 112 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_DeclineMagikarp::
# 113 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou
# 114 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 115 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 116 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 117 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 118 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NotEnoughMoney::
# 119 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney
# 120 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 121 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 122 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 123 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 124 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp::
# 125 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_IDontGiveRefunds
# 126 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 127 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 128 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 129 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp::
# 130 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 131 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon
# 132 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 133 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 134 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 135 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 136 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Nurse::
# 137 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 138 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 139 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 140 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 141 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 142 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 143 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Youngster::
# 144 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC, MSGBOX_NPC
# 145 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 146 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 147 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Newspaper::
# 148 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 149 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ItsANewspaper
# 150 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 151 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end

Route4_EventScript_Fisherman::
# 156 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lockall
# 157 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 158 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_EventScript_Fisherman_Text_0
# 159 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	releaseall
	return


Route4_EventScript_Fisherman_Text_0:
# 158 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	.string "All I ever seem to catch are FEEBAS.\n"
	.string "Maybe I need a new rod.$"
