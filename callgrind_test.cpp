#include <iostream>
using namespace std;

const int ITERATIONS = 10000;

int funcA1(int x) {
  int ret = x;
  for (int ii = 0; ii < ITERATIONS; ++ ii) {
	ret += 1;
    ret = (ret * 3) % 5011;
  }
  return ret;
}

int funcA2(int x) {
  int ret = x;
  for (int ii = 0; ii < ITERATIONS; ++ ii) {
	  for (int ii = 0; ii < ITERATIONS; ++ ii) {
		  ret = (ret + 1) % 100;
	  }
  }
  for (int ii = 0; ii < ITERATIONS; ++ ii) {
    ret = (ret + funcA1(ret)) % 5011;
  }
  return ret;
}

int funcB1(int x) {
  int ret = x;
  for (int ii = 0; ii < ITERATIONS; ++ ii) {
	ret += 1;
    ret = (ret * 2) % 3613;
  }
  return ret;
}

int funcB2(int x) {
  int ret = 0;
  for (int ii = 0; ii < ITERATIONS; ++ ii) {
    ret = (ret + funcB1(ret)) % 3613;
    if (ret > 1500) {
      break;
    }
  }
  return ret;
}

int main() {
  cout << funcA2(0) << endl;
  cout << funcB2(0) << endl;
}
