#include <stdio.h>
#include <math.h>
#include "dist5.h"

int point_scan(point_t *p)
{
    p->x = 0;
    p->y = 0;
    if (scanf("%lf %lf", &p->x, &p->y) == EOF)
    {
        return EOF;
    }
    else
    {
        return 1;
    }
}

double dist(point_t *p1, point_t *p2)
{
    double result;
    result = 0;
    result = sqrt((p1->x-p2->x)*(p1->x-p2->x)+(p1->y-p2->y)*(p1->y-p2->y));
    return result;
}