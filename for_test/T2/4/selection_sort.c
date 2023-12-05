#include <stdio.h>

// void sort(int n, double *a)
// {

//   for (int k = 0; k <= n - 2; k++)
//   {
//     int i, min_num;
//     min_num = k;
//     for (i = k; i < n; i++)
//     {
//       if (a[min_num] > a[i])
//       {
//         min_num = i;
//       }
//     }
//     double tmp;
//     tmp = a[k];
//     a[k] = a[min_num];
//     a[min_num] = tmp;
//   }
// }

void sort(int n, double *a)
{
  for (int k = 1; k < n; k++)
  {
    for (int i = k; i >= 1; i--)
    {
      if (a[i] >= a[i - 1])
      {
        break;
      }
      else
      {
        double tmp;
        tmp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = tmp;
      }
    }
  }
}

void insert(int n, double *a, int k)
{
  for (int i = k; i >= 1; i--)
  {
    if (a[i] >= a[i - 1])
    {
      break;
    }
    else
    {
      int tmp;
      tmp = a[i];
      a[i] = a[i - 1];
      a[i - 1] = tmp;
    }
  }
}