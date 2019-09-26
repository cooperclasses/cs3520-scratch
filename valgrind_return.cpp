#include <iostream>
using namespace std;

const int & f() {
	int ret = 10;
	return ret;
}

const int global = 10;

const int & g() {
	return global;
}

int main() {
	const int & x = f();
	if (x > 5) {
		cout << "x > 5" << endl;
	}

	const int & y = g();
	if (y > 5) {
		cout << "y > 5" << endl;
	}
}
