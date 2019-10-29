//Will Dudley 9/18/19 - Energy Drink Consumption Survey
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double totalCustomers, oneOrMorePerWeek, citrusPref, berryPref;
// Collect input
  cout << "Enter number of customers who participated in the survey: ";
  cin >> totalCustomers;

  cout << "Enter total number of people who purchased one or more energy drinks per week: ";
  cin >> oneOrMorePerWeek;

  cout << "How many of them prefer citrus over berry?: ";
  cin >> citrusPref;

  cout << "How many of them prefer berry over citrus?: ";
  cin >> berryPref;

//Calculate remaining other choices
  double otherPref;
  otherPref = oneOrMorePerWeek - citrusPref - berryPref;

//Display results
  cout << "\nEnergy Drink Consumption Survey Result\n";
  cout << "Total number of customers who participated in the survey: " << totalCustomers << endl;

//Calculate some percentages for final results
  double percentageOfOneOrMore, percentageOfCitrus, percentageOfBerry, percentageOfOther;
  percentageOfCitrus = ((citrusPref/oneOrMorePerWeek) * 100);
  percentageOfBerry = ((berryPref/oneOrMorePerWeek) * 100);
  percentageOfOther = ((otherPref/oneOrMorePerWeek) * 100);
  percentageOfOneOrMore = oneOrMorePerWeek * 100 / totalCustomers;
cout << "Percentage of people who purchased one or more energy drinks per week: "<< round(percentageOfOneOrMore) << endl;
cout << "Of those customer who purchase energy drink, approximately\n";
cout <<  round(percentageOfCitrus) << " percent of them prefer citrus-flavored energy drinks,\n";
cout <<  round(percentageOfBerry) << " percent prefer berry-flavored energy drinks,\n";
cout <<  round(percentageOfOther) << " percent prefer flavors other than citrus or berry.\n";
  return 0;
}
