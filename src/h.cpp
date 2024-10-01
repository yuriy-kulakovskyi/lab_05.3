#include "../include/main.h"
#include <cmath>

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