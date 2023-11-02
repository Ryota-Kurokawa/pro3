#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "qeq2.h"

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
