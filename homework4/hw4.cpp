// This program calculates a talent show score
#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 5;

// Function prototypes
void getContestantName(string &); // Ask for contestant name
double getJudgeData(double score[]); // Testing
double calcScore(double score[]); // Called once by main, use array
void displayResult(string, double);  // Should this be a string?
double findLowest(double score[]); // Find and return lowest scores
double findHighest(double score[]);

// Begin main()
int main()
{
  // Announce start up
  cout << "You've started the talent show calculator..." << endl << endl;

  // Ask for contestant name
  string name;
  getContestantName(name);

  // Gather input and validate for judge input
  double score[SIZE];
  getJudgeData(score);

  // Calculate the scores
  calcScore(score);

void getContestantName(string &name)
{
  cout << "Enter the contestant's name: ";
  getline(cin, name);
}

double getJudgeData(double score[])
{
  for (int count = 0; count < SIZE; count++)
  {
    if (score[count] > 0 && score[count] < 5)
    {
      cout << "Enter judge #" << (count+1) << "'s score: ";
      cin >> score[count];
    }
    else
    {
      cout << "Please enter the score again"
    }
  }
}

double findLowest(double score[])
{
  double lowest;
  lowest = score[0];
  for (int count = 0; count < SIZE; count++)
  {
    if (score[count] < lowest)
        lowest = score[count];
  }
  return lowest;
}

double findHighest(double score[])
{
  double highest;
  highest = score[0];
  for (int count = 0; count < SIZE; count++)
  {
    if (score[count] > highest)
        highest = score[count];
  }
  return highest;
}

double calcScore(double score[])
{
  double lowest = findLowest(score);
  double highest = findHighest(score);

  cout << "The highest number is: " << highest << endl;
  cout << "The lowest number is: " << lowest << endl;
}
