#include <math.h>
#include "newton.h"

double newton(double a, double b, double c, double x0, double eps, int max_repeat)
{
  double x1;
  int i = 0;
  while (i < max_repeat)
  {
    double fx = a * x0 * x0 + b * x0 + c;
    double dfx = 2 * a * x0 + b;
    x1 = x0 - fx / dfx;
    if (fabs(x1 - x0) < eps)
      return x1;
    x0 = x1;
    i++;
  }
  return x1;
}
