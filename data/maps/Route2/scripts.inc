# 1 "data/maps/Route2/scripts.pory"

# 2 "data/maps/Route2/scripts.pory"

# 3 "data/maps/Route2/scripts.pory"
Route2_MapScripts::
# 4 "data/maps/Route2/scripts.pory"
	.byte 0
# 5 "data/maps/Route2/scripts.pory"

# 6 "data/maps/Route2/scripts.pory"
Route2_EventScript_RouteSign::
# 7 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
# 8 "data/maps/Route2/scripts.pory"
	end
# 9 "data/maps/Route2/scripts.pory"

# 10 "data/maps/Route2/scripts.pory"
Route2_EventScript_DiglettsCaveSign::
# 11 "data/maps/Route2/scripts.pory"
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
# 12 "data/maps/Route2/scripts.pory"
	end

Route2_EventScript_Xiomara::
# 18 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_XIOMARA, Xiomara_Intro, Xiomara_Outro
# 19 "data/maps/Route2/scripts.pory"
	msgbox Xiomara_Postbattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Xiomara_Intro::
# 24 "data/maps/Route2/scripts.pory"
	.string "My POKéMON and I battle with the\n"
	.string "power of nature! Think you can take\l"
	.string "us on?$"

Xiomara_Outro::
# 28 "data/maps/Route2/scripts.pory"
	.string "Stunning.$"

Xiomara_Postbattle::
# 32 "data/maps/Route2/scripts.pory"
	.string "POKéMON love to be outdoors!$"
