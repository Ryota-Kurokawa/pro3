#include <stdio.h>

int main(void)
{
  double a, b, c, d;
  int result = 0;
  for (;;)
  {
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if (a == 0)
    {
      break;
    }

    double D = (-4 * a * c * c * c) - (27 * a * a * d * d) + (b * b * c * c) + (18 * a * b * c * d) - (4 * b * b * b * d); // 三次式の判別式です。
    if (D > 0)
    {
      result = 3;
    }

    if (D < 0)
    {
      result = 1;
    }

    else
    {
      result = 2;
    }
    printf("%d\n", result);
  }

  return 0;
}