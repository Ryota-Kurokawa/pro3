#include <stdio.h>

void swapmin(int n, double *a, int k)
{
  int min_num = k;
  int i;
  for (i = k; i < n; i++)
  {
    if (a[min_num] > a[i])
    {
      min_num = i;
    }
  }
  int tmp;
  tmp = a[k];
  a[k] = a[min_num];
  a[min_num] = tmp;
}

int main(void)
{
  int n;
  double a[100];
  int i;
  int k;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%lf", &a[i]);
  }
  scanf("%d", &k);
  swapmin(n, a, k);
  for (i = 0; i < n; i++)
  {
    printf("%f\n", a[i]);
  }
  return 0;
}