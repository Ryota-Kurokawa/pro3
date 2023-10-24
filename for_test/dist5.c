#include <stdio.h>
#include "dist5.h"
#include <math.h>


int point_scan(point_t *p){
    if (scanf("%lf%lf", &p->x,&p->y) == EOF)
    {
        return EOF;
    }
    else
    {
        return 1;
    }
}

double dist(point_t *p1, point_t *p2){
    double distanceX = p1->x-p2->x;
    double distanceY = p1->y-p2->y;
    double totalDistance = sqrt(distanceX*distanceX+distanceY*distanceY);
    return totalDistance;
}
