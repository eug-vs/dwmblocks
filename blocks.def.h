//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "playerctl metadata --format='{{ artist }} - {{ title }}' --player=spotify 2> /dev/null", 3, 1},
	{"", "xkb-switch", 0, 4},
	{"", "~/.local/share/i3blocks-modules/volume -np", 0, 2},
	{"", "~/.local/share/i3blocks-modules/backlight -np", 0, 3},
	{" ", "~/.local/share/i3blocks-modules/wifi -np -f '{ssid}'", 15, 0},
	{"  ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%", 30, 0},
	{" ", "date '+%a, %d.%m.%Y  %H:%M:%S'", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
