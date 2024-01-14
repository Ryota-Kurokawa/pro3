#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHANCE 15
#define SIMULATION 100

int x_accept(int c, int y, int x)
{
    if (c <= 5)
    {
        return y >= 4 ? 1 : 0;
    }
    else
    {
        return 1;
    }
}

int simulate_marriage(int x)
{
    int married = 0;

    for (int c = 1; c <= CHANCE; c++)
    {
        int y = rand() % 5 + 1;

        if (x_accept(c, y, x) && (rand() % 100) < (0.19 * x))
        {
            married = 1;
            break;
        }
        else if (c > 1 && x_accept(c, y, x) && (rand() % 100) < (0.19 * x) * (1.1 - 0.1 * y))
        {
            married = 1;
            break;
        }
    }

    return married;
}

int main()
{
    srand(time(NULL));
    int success = 0;
    int total = 0;

    for (int i = 0; i < SIMULATION; i++)
    {
        int x = rand() % 5 + 1;
        int married = simulate_marriage(x);

        if (married)
        {
            int y = rand() % 5 + 1;
            total += y;
            success++;
        }
        else
        {
            total -= 5;
        }
    }

    double probability = (double)success / SIMULATION;
    double expected_level = (double)total / SIMULATION;

    printf("結婚率: %.2f\n", probability);
    printf("期待値: %.2f\n", expected_level);

    return 0;
}
