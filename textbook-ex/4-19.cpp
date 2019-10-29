// This test program does not accept
// test scores that are greater than 100 or less than 0.
#include <iostream>
using namespace std;

int main()
{
  // Constants for grade thresholds
  const int A_SCORE = 90,
            B_SCORE = 80,
            C_SCORE = 70,
            D_SCORE = 60,
            MIN_SCORE = 0,   // Minimum valid score
            MAX_SCORE = 100; // Maximum valid score

  int testscore;  // To hold a numeric test score

  //Get the numeric test score.
  cout << "Enter your numeric test score and I will\n"
       << "tell you the letter grade you earned: ";
  cin >> testscore;

  //Validate the input and determine the grade
  if (testscore >= MIN_SCORE && testscore <= MAX_SCORE)
  {
    // Determine the letter grade
    if (testscore >= A_SCORE)
      cout << "Your grade is A.\n";
    else if (testscore >= B_SCORE)
      cout << "Your grade is B.\n";
    else if (testscore >= C_SCORE)
      cout << "Your grade is C.\n";
    else if (testscore >= D_SCORE)
      cout << "Your grade is D.\n";
    else
      cout << "Your grade fucking sucks. \nConsider suicide.\n";
  }
  else
  {
    // An invalid score was entered.
    cout << "\nThat is an invalid score. Run the program\n"
         << "again and enter a value in the range of\n"
         << MIN_SCORE << " through " << MAX_SCORE << ".\n";
  }

  return 0;
}
