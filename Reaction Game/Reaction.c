/*
 * Annie mak
 * Reaction Game Using a Button and Two LEDs
 * Program #6
 * 06/14/17 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  // Add startup code here.
  int timeCounter;
  char playAgain = 'Y';
  int interval; 
  float averageScore = 0;
  int rounds = 0;
  srand(CNT);
  
  print("Game Instructions: \n");
  print("The red LED will turn on when the game starts. \n");
  print("When the blue LED turns on, \n");
  print("let go of the button as fast as you can.\n\n");
  
  while (playAgain == 'Y' || playAgain == 'y')
  {
    print("Press and hold the button to start.\n");
    while (input(0) == 0)
    {
      // intentionally empty loop
    }      
    high(15);
    low(14);
    
    interval = rand() % 1001 + 500;
    pause(interval);
    
    low(15);
    high(14);
    
    timeCounter = 0;
    while (input(0) == 1)
    {
      pause(1);
      timeCounter = timeCounter + 1;
    }      
    low(14);
    
    if (timeCounter > 0) 
    {
      print("Your time was %d ms.\n", timeCounter);
      averageScore = averageScore + timeCounter;
      rounds = rounds + 1;
    }      
    else 
    {
      print("Oops! You let go of the button too soon.\n");
    }
    
    
    print("Would you like to play again? (Y/n)  ");     
    scan("%c", &playAgain);
    }     // end of while loop for play again?
    
    averageScore = averageScore / rounds;
    print("Goodbye! Your avverage score was %o.2f ms.\n", averageScore);
    return 0;

}