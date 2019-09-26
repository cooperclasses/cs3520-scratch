#include <iostream>
using namespace std;

int main() {
  int countdown = 10;

  while (countdown > 0) {
    cout << countdown-- << "..." << endl;
  }

  cout << "blastoff!" << endl;
}
