#include <iostream>
#include <fstream>

using namespace std;

int computeNumberOfAsterisks(int n) {
		return (n + 50) / 100;
}

int main() {
	int sales;

	int numAsterisks;

	int numSales;
	cout << "enter the number of sales: ";
	cin >> numSales;

	for (int i=0;i<numSales;++i) {
		cout << "enter sales: ";
		cin >> sales;

		numAsterisks = computeNumberOfAsterisks(sales);
		cout << "sales = " << sales << "; computeNumberOfAsterisks(sales) = " << numAsterisks << endl;

		for (int i=0;i<numAsterisks; ++i) {
				cout << "*";
		}

		cout << endl;
	}

	ofstream ofile;
	ofile.open("data.txt");
	ofile << sales;

	for (int i=0;i<numAsterisks; ++i) {
		ofile << "*";
	}

	ofile << endl;
	ofile.close();

	ifstream ifile;
	ifile.open("data.txt");

	string asterisks;
	ifile >> sales >> asterisks;
	ifile.close();

	cout << "sales: " << sales << "; asterisks: " << asterisks << endl;

	return 0;
}
