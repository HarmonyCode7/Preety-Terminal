#include <stdio.h>

enum {
	DVI,
	DHL, DVL, DUL, DUR,DVR, DDR,DDL, DDH, DHV, DUH, DVH};

enum {hat, space, tab, newline};
enum {black,red,green,blue,yellow,white=255};

const int xterm_color_number[] ={
	[black] 		= 0,
	[white] 		= 15,
	[red] 			= 9,
	[blue] 			= 12,
	[yellow] 		= 11,
	[green] 		= 2
};

const char* color[] = {
	[black] = "0",
	[white] = "15"
};
const char * unicode[] = {
	[hat] 					= "🎩",
	[space] 				= " ",
	[tab] 					= "    ",
	[newline] 				= "\n"
};
const char * double_box[] = {
    [DHL] = "\u2550",
    [DVI] = "\u2551",
    [DDR] = "\u2554",
    [DDL] = "\u2557",
    [DUR] = "\u255A",
    [DUL] = "\u255D",
    [DVR] = "\u2560",
    [DVL] = "\u2563",
    [DDH] = "\u2566",
    [DUH] = "\u2569",
    [DVH] = "\u256C"
};

void prepeat(const char * ch , int count, char* end)
{
    while(count-- > 0)
    {
        printf("%s", ch);
    }
	printf("%s",end);
}

int len(char * s)
{
    char * t = s;
    for(;*t != '\0'; t++);
    return t - s;
}
char* max(char ** list)
{
    char* max_length = list[0]; //the first word in the word list
    for(;*list != NULL; list++)
    {
        max_length = len(*list) >= len(max_length) ? *list : max_length;
    }
    return max_length;
}

void screen()
{
	printf("%s", double_box[DDR]);
	prepeat(double_box[DHL], 30,"");
	prepeat(double_box[DDL], 1, "\n");
}

void clear_color(bg, fg)
{
	system("clear");
	char buf[27];
	//ensure that we have a valid number for color
	bg = bg > 255 ? 255 : bg;
	fg = fg > 255 ? 255 : fg;
	sprintf(buf,"\033[38;5;%d;48;5;%dm", fg, bg);
	printf("%s",buf);
	
}
 
int main(void) {

	//clear_color(0, 255);
	system("clear");
	printf("\033[38;5;0;48;5;15m");
	system("clear");

	char * words[] = {
		"loop",
		"further",
		"feather",
		"aprehended",
		"longestword",
		"pneumonoultramicroscopicsilicovolcanoconiosis"
	};
	//printf("The longest word is: \033[38;1;9m%s\033[0m\n", max(words));
	printf("                  %s                           \n", unicode[hat]);
	printf(" .          %s%s                             \n", unicode[tab], unicode[hat]);
	screen();

  return 0;
}
