#include <iostream>

using namespace std;

int computeNumberOfAsterisks(int n) {
		return (n + 50) / 100;
}

int main() {
	int sales;

	while (true) {
		cout << "enter sales: ";
		cin >> sales;

		int numAsterisks = computeNumberOfAsterisks(sales);
		cout << "sales = " << sales << "; computeNumberOfAsterisks(sales) = " << numAsterisks << endl;

		for (int i=0;i<numAsterisks; ++i) {
				cout << "*";
		}

		cout << endl;
	}

	return 0;
}
