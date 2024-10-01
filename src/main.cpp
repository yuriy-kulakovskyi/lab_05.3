#include <iostream>
#include <cmath>
#include "../include/main.h"

using namespace std;

int main() {
  double gp, gk, z;
  int n;

  cout << "gp = "; cin >> gp;
  cout << "gk = "; cin >> gk;
  cout << "n = "; cin >> n;

  double dg = (gk - gp) / n;

  double q = gp;

  while (q <= gk) {
    z = p(2 * q + 1) + pow(p(q*q - 1), 2) + sqrt(p(1));

    cout << q << " " << z << endl;
    q += dg;
  }

  cout << p(0.5) << endl;

  return 0;
}
