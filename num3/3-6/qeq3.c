#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "qeq3.h"

int qeq(double a, double b, double c, double *x1, double *x2)
{
    int counter = 0;
    double D = 0;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        counter = 2;
        double result1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double result2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        if (result1 > result2)
        {
            *x1 = result2;
            *x2 = result1;
        }
        else if (result1 < result2)
        {
            *x1 = result1;
            *x2 = result2;
        }
    }
    else if (D == 0)
    {
        double result = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        *x1 = result;
        counter = 1;
    }
    else if (D < 0)
    {
        counter = 0;
    }

    // else if (*x1 == NAN || *x2 == NAN)
    // {
    //     printf("\n");
    // }
    // else if (x1 == x2)
    // {
    //     printf("%.5f\n", x1);
    // }
    return counter;
}