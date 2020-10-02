#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> v = { 1, 2, 3, 4 };
	v[4] = 5;

	int x = v[4];
	/*
	string s = "hello!";
	char x = s[7];
	*/
	cout << x << endl;
}
