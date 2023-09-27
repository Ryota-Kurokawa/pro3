#include <stdio.h>

int main(void)
{
    double sum = 0;
    int input = 0;
    double avr = 0;
    int counter = 0;

    while (scanf("%d", &input) != EOF)
    {
        counter += 1;

        if (input <= 100 && 90 <= input)
        {
            printf("4.0\n");
            sum = sum + 4.0;
        }
        else if (input <= 89 && 85 <= input)

        {
            printf("3.5\n");
            sum = sum + 3.5;
        }
        else if (input <= 84 && 80 <= input)

        {
            printf("3.0\n");
            sum = sum + 3.0;
        }
        else if (input <= 79 && 75 <= input)
        {
            printf("2.5\n");
            sum = sum + 2.5;
        }
        else if (input <= 74 && 70 <= input)
        {
            printf("2.0\n");
            sum = sum + 2.0;
        }
        else if (input <= 69 && 65 <= input)
        {
            printf("1.5\n");
            sum = sum + 1.5;
        }
        else if (input <= 64 && 60 <= input)
        {
            printf("1.0\n");
            sum = sum + 1.0;
        }
        else if (input < 60 && 0 <= input)
        {
            printf("0.0\n");
            sum = sum + 0.0;
        }
    }

    avr = sum / counter;
    printf("%.3f", avr);
    return 0;
}
