#include <stdio.h>
#include <stdlib.h>

// int irand(int a, int b)
// {
//     return b + (int)(rand() * (a - b + 1.0) / (1.0 + RAND_MAX));
// }
int irand(int a, int b){
    return rand() % (b - a + 1) + a;
}

int main(void)
{
    int a, b, n;
    a = 0;
    b = 0;
    n = 0;
    printf("a, b, n をスペース区切りで入力してください: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &n);
    int k[n];
    int s[n];
    // 初期化
    for (int i = 0; i < n; i++)
    {
        s[i] = 0;
        k[i] = 0;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        k[i] = irand(a, b);
        s[k[i]] ++;
        printf("%d ", k[i]);
    }
    printf("\n");
    for (int i = a; i <= b; i++)
    {
        printf("%d: %d\n", i, s[i]);
    }
    
    
    
    return 0;
}
