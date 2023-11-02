#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *new_array_scan(int *pn);

int main(void)
{
    int *a = NULL;
    int *b = NULL;
    int n, max, min;
    max = INT_MIN;
    min = INT_MAX;
    n = 0;
    b = (int *)malloc(max - min + 1);
    a = new_array_scan(&n);
    
    for (int i = 0; i < n; i++)
    {
        max = a[i] < max ? max : a[i];
        min = a[i] > min ? min : a[i];
        b[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] > 0)
        {
            printf("%d: %d\n", i, b[i]);
        }
    }
    
    return 0;
}
