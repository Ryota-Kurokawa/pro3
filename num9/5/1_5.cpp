#include <iostream>
#include <assert.h> // assert を使うためのヘッダ

class stack
{
private:
  static const int max = 100;
  int data[max];
  int sp;

public:
  void push(int);     // データをプッシュする
  void pop();         // データをポップする
  bool empty() const; // スタックが空のとき true を返す
  int top() const;    // スタックトップのデータを返す
  int size() const;   // 現在格納されているデータ数を返す
  stack();            // コンストラクタ
  ~stack();           // デストラクタ
  friend bool equal(const stack&, const stack&); // フレンド関数の宣言
};

void stack::push(int d)
{
  assert(sp < max);
  data[sp++] = d;
}
void stack::pop()
{
  assert(0 < sp);
  --sp;
}
bool stack::empty() const
{
  return sp == 0;
}
int stack::top() const
{
  return data[sp - 1];
}
int stack::size() const
{
  return sp;
}
stack::stack() { sp = 0; }
stack::~stack() {}

bool equal(const stack& s1, const stack& s2) {
  if (s1.sp != s2.sp) return false;
  for (int i = 0; i < s1.sp; i++) {
    if (s1.data[i] != s2.data[i]) return false;
  }
  return true;
}

int main(void)
{
  stack s1, s2;
  s1.push(5);
  s1.push(8);
  s1.push(9);
  s2.push(5);
  s2.push(8);
  s2.push(9);
  std::cout << equal(s1,s2) << std::endl; // 1 を表示
  s2.pop();
  std::cout << equal(s1,s2) << std::endl; // 0 を表示
  return 0;
}