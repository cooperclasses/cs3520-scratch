#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v = { 1, 2, 3, 4 };

	int x = v[4];
	cout << x << endl;

	int y = v.at(4);
	cout << y << endl;
}
