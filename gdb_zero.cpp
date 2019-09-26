#include <iostream>
#include <cassert>
using namespace std;

void print_divide(int a, int b) {
	//assert(b != 0);
	int result = a / b;
	cout << result << endl;
}

int main() {
	print_divide(2, 3);
	print_divide(2, 2);
	print_divide(2, 1);
	print_divide(2, 0);
}
