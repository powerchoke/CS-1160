// This program is to average three numbers.
#include <iostream>
using namespace std;

int main()
{
  double first, second, third, average, result;

  // Figure out the first number
  cout << " Enter the first number: ";
  cin >> first;

  //Figure out the second number
  cout << " Enter the second number: ";
  cin >> second;

  //Figure out the third numbers
  cout << " Enter the third number: ";
  cin >> third;

  //Calculate and store value as multiplied
  average = first + second + third;

  //Final calulation prints final value
  result = average / 3;
  cout << " The average of these numbers is: " << result << endl;
}
