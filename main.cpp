#include <iostream>
#include <cmath>

using namespace std;

double p(double x);

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

  return 0;
}

double p(const double x) {
  if (abs(x) >= 1)
    return (sin(x) + cos(x) / pow(sin(x), 2) + exp(x));
  else
  {
    double S = 0;
    int j = 0;
    double a = 1;
    S = a;

    do {
      j++;
      double R = x*x/((3*j-2)*(3*j-1)*2*j);
      a *= R;
      S += a;
    } while (j < 4);
    return 1/cos(x) * S;
  }
}
