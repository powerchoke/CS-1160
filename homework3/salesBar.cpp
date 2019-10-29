// This program reads data from a file.
#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
int convertSalesToNumberOfAsterisks(int);

int main()
{
  ofstream outputFile;
  int numberOfStores;
  int sales;

  // Get the number of stores
  cout << "Enter the total number of stores that you need to input sales data: ";
  cin >> numberOfStores;

  // Open a file named Sales.txt
  outputFile.open("memory.dat");

  for (int count = 1; count <= numberOfStores; count++)
  {
    cout << "Enter today's sales for store "  << count << ": ";
    cin >> sales;

    // Write the sales to the file. (put to)
    int numberOfAsterisks = convertSalesToNumberOfAsterisks(sales);
    for (int i=1; i<=numberOfAsterisks; i++)
    {
      outputFile << '*';
    }
    outputFile << endl;
  }

  // Close the file.
  outputFile.close();
  cout << "Data was written to memory.dat" << endl; // Debug

  ifstream inputFile;
  string asterisks;

  // Open the file.
  inputFile.open("memory.dat");

  // Read the numbers from the file and display them
  cout << "\nSALES BAR CHART\n(Each * = $100)" << endl;
  for (int count = 1; count <= numberOfStores; count++ )
  {
    cout << "Store " << count << ": ";

    // inputFile get from sales
    inputFile >> asterisks;
    cout << asterisks << "\n";
  }
  // Close the file.
  inputFile.close();

  string nameOfFileToSaveTo;
  string date;
  cout << "Please enter today's date (mmddyyyy): ";
  cin >> date;
  cout << "Please enter a filename you wish to save to: ";
  cin >> nameOfFileToSaveTo;

  // Open file for reading
  inputFile.open("memory.dat");
  // Open file for writing
  outputFile.open(nameOfFileToSaveTo);
  outputFile << endl << "Date: " << date << endl;
  outputFile << "\nSALES BAR CHART\n(Each * = $100)" << endl;
  for (int count = 1; count <= numberOfStores; count++ )
  {
    outputFile << "Store " << count << ": ";

    // inputFile get from sales
    inputFile >> asterisks;
    outputFile << asterisks << "\n";
  }

  return 0;
}

int convertSalesToNumberOfAsterisks(int amountOfSale)
{
   return (amountOfSale + 50)/100;
}
