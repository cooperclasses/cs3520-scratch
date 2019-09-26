#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> v = { 1, 2, 3, 4 };
	v[4] = 5;

	string s = "hello!";
	char c = s[7];
	cout << c << endl;
}
