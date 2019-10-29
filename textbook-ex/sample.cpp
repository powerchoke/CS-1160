#include <iostream>

using namespace std;
int echo(int n) {
		return n;
}

int main(int argc, char** argv) {
	int x = 5;

	cout << "x = " << x << "; echo(x) = " << echo(x) << endl;

	return 0;
}
