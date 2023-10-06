#include <stdio.h>
#include <math.h>
#include "dist3.h"

int main(void)
{
    double x1, x2, y1, y2;
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;
    
    for (int i = 0; i < 3; i++)
    {
        
        scanf("%lf", &x1);

        scanf("%lf", &y1);

        scanf("%lf", &x2);

        scanf("%lf", &y2);

        printf("%.4f\n", dist(x1, y1, x2, y2));
        
    }

    return 0;
}
