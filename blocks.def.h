//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "task _get rc.context", 60, 0},
	{"", "xkblayout-state print %s", 0, 4},
	{"", "[ $(pulsemixer --get-mute) = 1 ] && echo 🔇 && exit || echo  $(pulsemixer --get-volume | cut -f 1 -d ' ')%", 0, 2},
	{" ", "wpa_cli status | grep ^ssid= | sed 's/ssid=//'", 15, 0},
	{"  ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%", 30, 0},
	{" ", "date '+%a, %d.%m.%Y  %H:%M:%S'", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
