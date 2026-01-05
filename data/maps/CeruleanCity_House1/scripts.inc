# 1 "data/maps/CeruleanCity_House1/scripts.pory"

# 2 "data/maps/CeruleanCity_House1/scripts.pory"

# 3 "data/maps/CeruleanCity_House1/scripts.pory"
CeruleanCity_House1_MapScripts::
# 4 "data/maps/CeruleanCity_House1/scripts.pory"
	.byte 0

CeruleanCity_House1_EventScript_BadgeGuy::
# 9 "data/maps/CeruleanCity_House1/scripts.pory"
	lockall
# 10 "data/maps/CeruleanCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/CeruleanCity_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MAGNET_FROM_NERD, CeruleanCity_House1_EventScript_NerdMagnet
# 12 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_EventScript_BadgeGuy_Text_0
# 13 "data/maps/CeruleanCity_House1/scripts.pory"
	releaseall
	return


CeruleanCity_House1_EventScript_NerdMagnet::
# 17 "data/maps/CeruleanCity_House1/scripts.pory"
	msgbox CeruleanCity_House1_EventScript_NerdMagnet_Text_0
# 18 "data/maps/CeruleanCity_House1/scripts.pory"
	giveitem ITEM_MAGNET, amount = 1
# 19 "data/maps/CeruleanCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_MAGNET_FROM_NERD
# 20 "data/maps/CeruleanCity_House1/scripts.pory"
	releaseall
	return


CeruleanCity_House1_EventScript_BadgeGuy_Text_0:
# 12 "data/maps/CeruleanCity_House1/scripts.pory"
	.string "I've been nursing a shoulder injury, so\n"
	.string "I won't be able to use this. You can\l"
	.string "have it.$"

CeruleanCity_House1_EventScript_NerdMagnet_Text_0:
# 17 "data/maps/CeruleanCity_House1/scripts.pory"
	.string "I expected my STEEL POKéMON to be\n"
	.string "powered up by this, but I haven't\l"
	.string "noticed a difference. It must be\l"
	.string "defective. Maybe you'll find a use for\l"
	.string "it.$"
