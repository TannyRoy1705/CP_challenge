#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool debt = true;
  while (n--) {
    int a;
    cin >> a;
    int b;
    if (a % 2 == 0) {
      b = a / 2;
    } else {
      if (debt) {
        b = ceil(a / 2.0);
      } else {
        b = floor(a / 2.0);
      }
      debt = !debt;
    }
    cout << b << endl;
  }
  return 0;
}
