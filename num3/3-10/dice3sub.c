#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dice3sub.h"

void dice_throw(int d[ ], int n)
{
    for (int i = 0; i < n; i++)
    {
        d[i] = (rand() % 6) + 1;
    }
    
}
void dice3_distr(int n, int d1[ ], int d2[ ], int d3[ ], int c[ ])
{
    for (int i = 0; i <= D3_MAX; i++)
    {
        c[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        c[d1[i] + d2[i] + d3[i]]++;
    }
}