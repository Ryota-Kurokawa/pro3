#include <stdio.h>

int main(void){
    int a,b;
    double x,y;
    a=0;
    b=0;
    x=0.0;
    y=0.0;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lf",&x);
    scanf("%lf",&y);

    printf("aの番地%p\n",&a);
    printf("bの番地%p\n",&b);
    printf("xの番地%p\n",&x);
    printf("yの番地%p\n",&y);
    
    return 0;
}