#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "bisection.h"

double bisection(double x1, double x2, double a, double b, double c, double eps)
{
    double xMid, xMin, xMax, resultMin, resultMax, resultMid, reuslt;
    xMid = 0;
    xMin = 0;
    xMax = 0;
    resultMin = 0;
    resultMax = 0;
    resultMid = 0;

    int i = 0;
    xMax = x2;
    xMin = x1;

    for (;;)
    {
        xMid = (xMin + xMax) / 2;
        resultMid = a * xMid * xMid + b * xMid + c;
        resultMax = a * xMax * xMax + b * xMax + c;
        resultMin = a * xMin * xMin + b * xMin + c;
        if (fabs(resultMin) < eps)
        {
            reuslt = xMin;
            break;
        }
        else if (fabs(resultMax) < eps)
        {
            reuslt = xMax;
            break;
        }
        else if (fabs(xMin - xMax) < eps)
        {
            reuslt = xMin;
            break;
        }
        else if (resultMid >= 0 && resultMax >= 0)
        {
            xMax = xMid;
            xMin = xMin;
        }
        else if (resultMid >= 0 && resultMax <= 0)
        {
            xMin = xMid;
            xMax = xMax;
        }
        else if (resultMid < 0 && resultMax >= 0)
        {
            xMin = xMid;
            xMax = xMax;
        }
        else if (resultMid < 0 && resultMax <= 0)
        {
            xMax = xMid;
            xMin = xMin;
        }
        else if (resultMid >= 0 && resultMin >= 0)
        {
            xMax = xMax;
            xMin = xMid;
        }
        else if (resultMid >= 0 && resultMin<=0)
        {
            xMax = xMid;
            xMin = xMin;
        }
        else if (resultMid < 0 && resultMin >= 0)
        {
            xMax = xMid;
            xMin = xMin;
        }
        else if (resultMid < 0 && resultMin<=0)
        {
            xMax = xMax;
            xMin = xMid;
        }
    }
    return reuslt;
}