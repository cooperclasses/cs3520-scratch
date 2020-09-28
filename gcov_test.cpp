#include <iostream>
using namespace std;

int main() {
  for (int i1 = 0; i1 < 100; ++ i1) {
    cout << i1 << endl;

    for (int i2 = 0; i2 < 100; ++ i2) {
      cout << i2 << endl;

      if (i1 < 0) {
        cout << "not run" << endl;
      }

      for (int i3 = 0; i3 < 100; ++ i3) {
        cout << i3 << endl;
      }
    }
  }
}
