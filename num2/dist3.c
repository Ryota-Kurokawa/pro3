#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dist3.h"

double dist(double x1, double y1, double x2, double y2)
{
    double z1, z2, z0, z;

    z1 = (x1 - x2) * (x1 - x2);
    z2 = (y1 - y2) * (y1 - y2);
    z0 = z1 + z2;

    z = sqrt(z0);

    return z;
}
