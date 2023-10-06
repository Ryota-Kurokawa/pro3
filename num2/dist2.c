#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dist(double x1, double y1, double x2, double y2)
{
    double z1, z2, z0, z;
    z1 = 0;
    z2 = 0;
    z0 = 0;
    z = 0;

    z1 = (x1 - x2) * (x1 - x2);
    z2 = (y1 - y2) * (y1 - y2);
    z0 = z1 + z2;

    z = sqrt(z0);

    printf("%.4f\n", z);
}

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
        dist(x1, y1, x2, y2);
    }

    return 0;
}
