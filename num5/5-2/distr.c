#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

extern int *new_array_scan(int *pn);

int main(void)
{
  int n;
  int *a = new_array_scan(&n);

  int min = INT_MAX;
  int max = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (a[i] < min)
      min = a[i];
    if (a[i] > max)
      max = a[i];
  }

  int size = max - min + 1;
  int *counts = (int *)calloc(size, sizeof(int));

  for (int i = 0; i < n; i++)
  {
    counts[a[i] - min]++;
  }

  for (int i = 0; i < size; i++)
  {
    if (counts[i] > 0)
    {
      printf("%d: %d\n", i + min, counts[i]);
    }
  }

  free(a);
  free(counts);

  return 0;
}
