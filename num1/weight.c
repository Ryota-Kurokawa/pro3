#include <stdio.h>
#include <assert.h>

int main(void)
{
    int n = 0;

    double sw = 0;
    int l = 0;
    scanf("%d", &n);
    double weight[n];
    for (int i = 0; i < n; i++)
    {
        weight[i] = 0;
    }

    fprintf(stderr, "それぞれの重さを入力");
    for (int j = 0; j < n; j++ )
    {
        scanf("%lf", &weight[j]);
    }
    for (;;)
    {
        if (scanf("%d", &l) == EOF)
        {
            break;
        }
        sw += weight[l];
     
    }
    printf("%.1f\n",sw);
    return 0;
}
