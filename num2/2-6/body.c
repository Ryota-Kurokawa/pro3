#include <stdio.h>
#include <string.h>
#define NM_LEN 31

typedef struct
{
    char name[NM_LEN + 1]; /* 名前 */
    double stature;        /* 身長 [cm] */
    double weight;         /* 重量 [kg] */
    double bmi;            /* BMI値 */
} body_index_t;

double bmi(body_index_t x)
{
    return x.weight / ((x.stature / 100) * (x.stature / 100));
}

void body_index_print(body_index_t x)
{
    printf("name: %s\n", x.name);
    printf("stature: %0.1fcm\n", x.stature);
    printf("weight: %0.1fkg\n", x.weight);
    printf("BMI: %0.1f\n", bmi(x));
}


int main(void)
{
    int count = 0;
    body_index_t p;
    for (;;)
    {
        if (count == 0)
        {
            scanf("%s", p.name);
            scanf("%lf", &p.stature);
            scanf("%lf", &p.weight);
            if (strcmp(p.name, "q") == 0)
            {
                break;
            }
            
            body_index_print(p);
            count++;
        }
        else if (count == 1)
        {
            scanf("%s", p.name);
            scanf("%lf", &p.stature);
            scanf("%lf", &p.weight);
            if (strcmp(p.name, "q") == 0)
            {
                break;
            }
            body_index_print(p);
            count++;
        }
        else if (count == 2)
        {
            scanf("%s", p.name);
            scanf("%lf", &p.stature);
            scanf("%lf", &p.weight);
            if (strcmp(p.name, "q") == 0)
            {
                break;
            }
            body_index_print(p);
            count++;
        }
        else
        {
            break;
        }
    }
    

    return 0;
}
