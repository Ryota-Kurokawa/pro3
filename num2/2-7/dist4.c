#include <stdio.h>
#include <math.h>  
#include "dist4.h"

double dist(point_t p1, point_t p2)
{
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return sqrt((x * x) + (y * y));
}