#include <stdio.h>

int main(void)
{
    int a, b, c;
    double x, y, z;
    a = 0;
    b = 0;
    c = 0;
    x = 0.0;
    y = 0.0;
    z = 0.0;
// 初めに入れる値

// 後から変更する値

    printf("aの番地%p\n", &a);
    printf("bの番地%p\n", &b);
    printf("xの番地%p\n", &x);
    printf("yの番地%p\n", &y);

    printf("入れ替え後\n");

    *((int*)0x16fc9a728) = 1111;

    printf("aの番地%d\n", *((int*)0x16fc9a728));
    // printf("bの番地%p\n", &b);
    // printf("xの番地%p\n", &x);
    // printf("yの番地%p\n", &y);

    return 0;
}