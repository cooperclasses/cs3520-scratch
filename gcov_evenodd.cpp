#include <iostream>
using namespace std;

bool is_even(unsigned int x) {
  return x % 2 == 0;
}

bool is_odd(unsigned int x) {
  return !is_even(x);
}

void print_evens(unsigned int x) {
  cout << "evens:";
  for (unsigned int ii = 1; ii <= x; ++ ii) {
    if (is_even(ii)) {
      cout << ii;
    }
  }
  cout << endl;
}

void print_odds(unsigned int x) {
  cout << "odds:";
  for (unsigned int ii = 1; ii <= x; ++ ii) {
    if (is_odd(ii)) {
      cout << ii;
    }
  }
  cout << endl;
}

int main() {
  unsigned int input;
  while (true) {
    cout << "enter a number:" << endl;
    if (!(cin >> input)) {
      break;
    }
    if (is_even(input)) {
      print_evens(input);
    } else {
      print_odds(input);
    }
  }
}
