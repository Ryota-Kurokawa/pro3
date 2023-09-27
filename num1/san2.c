#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
        else if (i%10==3)
        {
            printf("%d\n", i);
        }
        else if ( 30<=i && i<=39)
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
}
