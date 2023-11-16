#include "str_sort.h"
#include <string.h>
void str_sort(int n, record_t *a)
{
  for (int k = 0; k <= n - 2; k++)
  {
    int min_age = k;
    for (int i = k; i < n; i++)
    {
      if (a[i].age < a[min_age].age)
      {
        min_age = i;
      }
    }
    record_t tmp = a[k];
    a[k] = a[min_age];
    a[min_age] = tmp;
  }
  for (int k = 0; k <= n - 2; k++)
  {
    int min_height = k;
    for (int i = k; i < n; i++)
    {
      if (a[i].age == a[min_height].age)
      {
        if (a[i].height < a[min_height].height)
        {
          min_height = i;
        }
      }
    }
    record_t tmp = a[k];
    a[k] = a[min_height];
    a[min_height] = tmp;
  }
}