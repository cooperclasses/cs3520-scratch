#include <iostream>
#include <vector>
using namespace std;

static const int ITERATIONS = 3000000;

vector<int> inc_vec_value(vector<int> v) {
	for (int & e: v) {
		e += 1;
	}
	return v;
}

void inc_vec_ref(vector<int> & v) {
	for (int & e: v) {
		e += 1;
	}
}

void call_value() {
	vector<int> v = { 1, 2, 3, 4, 5 };
	for (int ii = 0; ii < ITERATIONS; ++ ii) {
		v = inc_vec_value(v);
	}
}

void call_ref() {
	vector<int> v = { 1, 2, 3, 4, 5 };
	for (int ii = 0; ii < ITERATIONS; ++ ii) {
		inc_vec_ref(v);
	}
}

int main() {
	call_value();
	call_ref();
}
