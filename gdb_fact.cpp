#include <iostream>
using namespace std;

unsigned int fact(unsigned int x) {
  if (x <= 1) {
    return 1;
  } else {
    return x * fact(x - 1);
  }
}

int main() {
  cout << fact(4) << endl;
}
