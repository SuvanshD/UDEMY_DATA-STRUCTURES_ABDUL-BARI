#include <stdio.h>
#include <iostream>

using namespace std;

int fact(int n)
{
  // Using Recursion
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return fact(n - 1) * n;
  }

  // Using direct formula
  // return (n * (n + 1)) / 2;

  // Using LOOP
  // int i, s = 1;
  // for (i = 1; i <= n; i++)
  // {
  //   s = s * i;
  // }
  // return s;
}
int main()
{
  int x = 5;
  int r = fact(5);
  printf("%d", r);
  return 0;
}