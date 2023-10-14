#include<stdio.h>
#include<math.h>

int array_scan(int a[])
{
    int n;
    int i;
    n = 0;
    for (i = 0; i < 100; i++)
    {
        if (scanf("%d", &a[i]) == EOF)
        {
            break;
        }
        else
        {
            n++;
        }
    }
    return n;
}
void array_ave_max(int n, int a[], double *ave, int *max)
{
    int i;
    int sum;
    sum = 0;
    *max = a[0];
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
    *ave = (double)sum / n;
}