#include<stdio.h>
#include<math.h>

int main(void)
{
    int x[ ] = {0,10,20,30,40};
    int k;
    int *p;
    k = sizeof(x)/sizeof(x[0]);
    printf("k = %d\n", k);
    
    for (size_t i = 0; i < k; i++)
    {
        printf("番地：%p\n", &x[i]);
        printf("値：%d\n", x[i]);
    }
    printf("\n");
    for (size_t i = 0; i < k; i++)
    {
        printf("%p\n", &x[i+1]);
    }

    printf("\n");
    p = &x[2];
    printf("%p\n", p+2);
    printf("%d\n", p[2]);

    return 0;
}