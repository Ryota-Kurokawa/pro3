#include <iostream>

int swap(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
  return 0;
}

int main(void)
{
  int a = 100, b = 20;
  std::cout << "a = " << a << ", b = " << b << std::endl;
  swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  return 0;
}