#include <stdio.h>

int main(void)
{
    int *p;
    double *q;
    double *r;
    int a = 1234;
    int b = 6666;
    int c = 0;
    double x = 4.0;
    double y = 6.0;
    double z = 0.0;

    printf("aの番地 = %p\n", &a);
    printf("bの番地 = %p\n", &b);
    printf("xの番地 = %p\n", &x);
    printf("yの番地 = %p\n", &y);

    p = &b;
    q = &x;

    *p = *p + 4;
    *q = *q * 2;

    for (;;)
    {
        printf("番地を入力 : ");
        
        if (scanf("%p", &r) ==0 )
        {
            break;
        }
        printf("%p 番地の内容は %f\n", r, *r);
    }

    return 0;
}