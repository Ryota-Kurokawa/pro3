#include <stdio.h>
#include <math.h>

void qeq(double a, double b, double c)
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

int main(void)
{
    for (;;)
    {
        double a, b, c;
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);
        qeq(a, b, c);
        if (a == EOF || a == 0)
        {
            break;
        }
    }

    return 0;
}
