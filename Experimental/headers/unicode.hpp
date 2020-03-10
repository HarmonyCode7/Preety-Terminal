#ifndef UNICODE_H
#include "../../std/stdfacs.hpp"
#endif //UNICODE_H

enum {
	DVI,
	DHL,
	DVL,
	DUL,
	DUR,
	DVR,
	DDR,
	DDL,
	DDH,
	DHV,
	DUH,
	DVH};

const std::string 
 double_box[] = {
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
			    



//color names
enum {red, green, blue, yellow, purple, black, white};

// text_format[background][red][underlined]

enum {foreground, background};

const std::string color[][256] = {
    [foreground] = {
	     [red] = "\033[38;5;9m",
	     [green] = "\033[38;5;2m",
	     [blue] = "\033[38;5;21m",
	     [yellow] = "\033[38;5;11m",       }
						  
};

std::string operator*(const std::string & s
		      ,const int count)
{
  std::string s_copy = s;
  for(int i = 0; i < count; ++i)
    s_copy += s;
  return s_copy;
}

std::string color_reset()
{
  return "\033[0m";
}

