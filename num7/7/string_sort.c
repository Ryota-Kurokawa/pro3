#include "string_sort.h"
#include <string.h>
void string_sort(int n, char (*a)[STRLEN + 1])
{
  for (int k = 0; k <= n - 2; k++)
  {
    int min = k;
    for (int i = k; i < n; i++)
    {
      if (strcmp(a[i], a[min]) < 0)
      {
        min = i;
      }
    }
    char tmp[STRLEN + 1];
    strcpy(tmp, a[k]);
    strcpy(a[k], a[min]);
    strcpy(a[min], tmp);
  }
}