#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 40; i++)
    {
        /* code */
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
        else if (i - 10 == 3 || i - 20 == 3 || i - 30 == 3 || (i - 30 < 10 && 0 < i - 30))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
