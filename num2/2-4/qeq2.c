#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "qeq2.h"

void qeq2(double a, double b, double c)
{
    double result1 = 0;
    double result2 = 0;
    double D = 0;
    D = b * b - 4 * a * c;
    if (D < 0)
    {
        printf("\n");
    }
    result1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    result2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if (result1 > result2)
    {
        printf("%.5f %.5f\n", result2, result1);
    }
    else if (result1 < result2)
    {
        printf("%.5f %.5f\n", result1, result2);
    }
    
    else if (result1 == NAN || result2 == NAN)
    {
        printf("\n");
    } else if (result1 == result2)
    {
        printf("%.5f\n", result1);
    }
}