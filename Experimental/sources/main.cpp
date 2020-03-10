#include "../../std/stdfacs.hpp"
#include "../headers/unicode.hpp"
#include "../headers/smartconsole.hpp"


int main()
{
  
  std::cout << color[foreground][blue];
  std::cout << double_box[DDR];
  std::cout << double_box[DHL] * 30;
  std::cout << double_box[DDL] <<std::endl;
  std::cout << double_box[DVI];
  std::cout << color[foreground][green];
  std::cout << "   Term Calculator" <<
  static_cast<std::string>(" ") * 12;
  std::cout << color[foreground][blue] << double_box[DVI] << std::endl <<
  double_box[DVR] <<
  double_box[DHL] * 30 <<
  double_box[DVL] << color_reset() << std::endl;

  //using smartconsole
  SmartConsole smc;
  smc << color[foreground][yellow] << double_box[DDR] << 
  double_box[DHL] * 35 << double_box[DDL] << "\n";
  smc << double_box[DVI] << color_reset();
  smc << "  Term Calculator " << 
  static_cast<std::string>(" ")* (smc[2].length() - smc[6].length());
  std::cout << smc;
}
