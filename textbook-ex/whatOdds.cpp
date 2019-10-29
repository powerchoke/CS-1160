// IDK
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
  int randNum;
  int maxValue;
  cout << "\t\tWhat are the odds?\n\n\nPlease enter a cap for your odds.\n";
  cin >> maxValue;

  // Validate input
  do
    {
      // Calculate the random number
//      const int minValue = 1;
//      srand(time(0));
//      randNum = (rand() % (maxValue - minValue + 1)) + minValue;

      // Define variables for while loop
      int inputNum;
      int guess;
      // Calculate the random number
      const int minValue = 1;
      randNum = (rand() % (maxValue - minValue + 1)) + minValue;
      srand(time(0));


      cout << "\nI have a number.";
      cout << "\nPlease enter your number: \n";
      cin >> guess;

      if (guess == randNum)
        {
          cout << "We guessed the same.";
          // Calculate odds
          int odds;
          cout << "\nOdds were: 1/" << maxValue <<"."; 
        }
      else if (guess > randNum)
        cout << "Too high!";
      else if (guess < randNum)
        cout << "Too low!";
      else
        { cout << "Please re-run the program and enter a correct value when prompted.\n";
        return 0;
        }
      cout << "\nMy guess was: " << randNum << ".\n";
    }
  while (maxValue >=1 && maxValue <=100);

  // End of while
  cout << "\n\nRun the program again with a \ncap between 1-100, but choose lower than 50 \nunless you're a sally.\n";

  return 0;
}
