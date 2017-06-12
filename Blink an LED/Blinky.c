/*
 *Annie Mak
 *Program #2
 *Blink an LED
 *06/12/17
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  while(1)
  {
    high(0);
    pause(100);
    high(15);
    pause(1000);
    low(0);
    pause(1000);
    low(15);
    pause(10);
    
  }  
}
