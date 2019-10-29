// Number guessing game by Will Dudley
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int num, guess, tries = 0;
int maxValue;
const int minValue = 1;
int randNum;


int main()
{
  srand(time(0));
  cout << "Welcome to the number guessing game!\n\nPlease enter a maximum for the range you wish to guess: \n";
  cin >> maxValue;
  randNum = (rand() % (maxValue - minValue + 1)) + minValue;

  do {
    cout << "Enter a guess between " << minValue << " and " << maxValue << ".\n";
    cin >> guess;
    tries++;

    if (guess > randNum)
      cout << "Too high!\n\n";
    else if (guess < randNum)
      cout << "Too low!\n\n";
    else
      {
      cout << "\nCorrect! You got it in " << tries << " guesses!\n";
      return 0;
      }
  } while ((guess != randNum) && (tries <= 2));

  cout << "Third time is not a charm huh.\n";
  cout << "Please re-run the program and try setting a smaller max for better luck.\n";

  return 0;
}
