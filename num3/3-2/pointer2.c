

#include <stdio.h>

int main(void)
{
  int a = 1234; 
  int b = 6666; 
  double x = 9.124; 
  double y = 1.1234;

  printf("a の番地は %p\n", &a);
  printf("b の番地は %p\n", &b);
  printf("%p\n", &x);
  printf("%p\n", &y);

  *((int*)0x7ffffcc2c) = 1111;  /* 0x804c番地 (a) に1111を書き込む */
  *((int*)0x7ffffcc28) = 2010;  /* 0x8048番地 (b) に2010を書き込む */
  *((double*)0x7ffffcc20) = 5.628;  /* 0x8044番地 (c) に5628を書き込む */
  *((double*)0x7ffffcc18) = 12.3890;

  printf("\n");
  printf("a の値 = %d\n", a);  /* 0x804c番地 (a) の内容を出力 */
  printf("b の値 = %d\n", b);  /* 0x8048番地 (b) の内容を出力 */
  printf("x の値 = %f\n", x);  /* 0x8048番地 (b) の内容を出力 */
  printf("y の値 = %f\n", y);  /* 0x8048番地 (b) の内容を出力 */


  

  


  return 0;
}