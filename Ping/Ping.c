/*
 *Annie Mak
 *Program #8
 *Ping
 *06/15/17
*/
#include "simpletools.h"


const int TRIGGER_PIN = 0;
const int ECHO_PIN = 1;

int main()                                    // Main function
{
  long duration;
  long distance;
  
  low(TRIGGER_PIN);
  low(ECHO_PIN);
  pause(250);
  
  while(1)
  {
    pulse_out(TRIGGER_PIN, 10);
    duration = pulse_in(ECHO_PIN, 1);
    print("%c%c", HOME, CLREOL);
    distance = duration / 148;
    print("Distance = %d inches\n", distance);
   
    if (distance < 15)
    {
      high(15);
    }               
    else
    {
      low(15);
    }      
   
   
    pause(250);
    
  }  
}