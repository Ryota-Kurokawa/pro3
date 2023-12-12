#include <iostream> // C の <stdin.h> に相当
int main(void)
{
  std::cout << "hello" << std::endl; // 出力の構文
  double n;                             // 宣言は, 使う前ならプログラム中のどこにあってもよい
  std::cout << "n = ";
  std::cin >> n; // 入力の構文
  double s = 0;
  //メートルをセンチメートルに変換する
  s = n * 100;
  std::cout << ""<< n <<" m " << s <<"cm" << std::endl;
  return 0;
}