#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2, z;
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
    z = 0;

    for (;;)
    {
        if (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) == EOF)
        {
            break;
        }
        z = sqrt(fabs(x2 - x1) * fabs(x2 - x1) + fabs(y2 - y1) * fabs(y2 - y1));
        printf("%.4f\n", z);
    }

    return 0;
}
