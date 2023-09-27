#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double x1, x2, y1, y2, z, z0, z1, z2;
    // printf("input x1 ");
    scanf("%lf", &x1);
    // printf("input y1 ");
    scanf("%lf", &y1);
    // printf("input x2 ");
    scanf("%lf", &x2);
    // printf("input y2 ");
    scanf("%lf", &y2);

    z1 = (x1 -x2)*(x1 - x2);
    z2 = (y1 -y2)*(y1 - y2);
    z0 = z1 + z2;

    z = sqrt(z0);

    printf("%.4f", z);

    return 0;
}
