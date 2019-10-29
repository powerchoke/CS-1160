// This program reads data from a file.
#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
int convertSalesToNumberOfAsterisks(int);
string getStringOfAsterisks(int);
void displayResult(string result);

int main()
{
  int numberOfStores;
  int sales;

  // Get the number of stores
  cout << "Enter the total number of stores that you need to input sales data: ";
  cin >> numberOfStores;

  string result = "\nSALES BAR CHART\n(Each * = $100)\n";

  // strings don't support appending ints but do support appending chars
  char ch = '1';
  for (int count = 1; count <= numberOfStores; count++)
  {
    cout << "Enter today's sales for store "  << count << ": ";
    cin >> sales;
    result += "Store ";
    result += ch++; // this is legal - increments the ascii value by 1
    result += ": ";
    result += getStringOfAsterisks(convertSalesToNumberOfAsterisks(sales));
    result += "\n";
  }

  displayResult(result);
}

void displayResult(string result)
{
  string nameOfFileToSaveTo;
  string date;
  cout << "Please enter today's date (mmddyyyy): ";
  cin >> date;
  cout << "Please enter a filename you wish to save to: ";
  cin >> nameOfFileToSaveTo;

  // Open file for writing
  ofstream outputFile;
  outputFile.open(nameOfFileToSaveTo);
  outputFile << "Date: " << date << endl;
  outputFile << result;
  cout << result;
}

int convertSalesToNumberOfAsterisks(int amountOfSale)
{
   return (amountOfSale + 50)/100;
}

string getStringOfAsterisks(int numberOfAsterisks)
{
  string s;
  for (int i=1; i<=numberOfAsterisks; i++)
  {
        s += '*';
  }
  return s;
}
