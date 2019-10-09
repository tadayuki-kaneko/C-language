#include <stdio.h>

#define a 10   //毎月の積み立て額
#define b 0.03 //年利
#define c 8    //運用年数

//関数を使いますよーという宣言
float f3(float p, float r, int n);
float beki(float p, int n);

//動作するところ
int main(void)
{
  float sum;
  sum = f3(a, b, c); //関数の呼出
  printf("運用年数%d年で積み立て総額は，%.0f万円です\n", c, sum);
  return 0;
}

//関数f3と関数bekiについて
float f3(float p, float r, int n)
{
  float sum, sum1, sum2;
  sum1 = p * (beki(1 + r, n + 1) - 1) / r;
  sum2 = 11 * p * (beki(1 + r, n) - 1) / r;
  sum = sum1 + sum2;
  sum -= p;
  return sum;
}
float beki(float p, int n)
{
  float sum = 1;
  for (int i = 1; i <= n; i++)
  {
    sum *= p;
  }
  return sum;
}
