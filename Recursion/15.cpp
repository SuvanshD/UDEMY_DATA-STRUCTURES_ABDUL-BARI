#include <stdio.h>
#include <iostream>

using namespace std;

double e(int x, int n)
{
  // Using Recursion
  static double S = 1;
  if (n == 0)
  {
    return S;
  }
  else
  {
    S = 1 + x * S / n;
    return e(x, n - 1);
  }

  // Using LOOPS
  // double S = 1;
  // for (; n > 0; n--)
  // {
  //   S = 1 + x * S / n;
  // }
  // return S;
}

int main()
{
  printf("%lf", e(2, 100));
  return 0;
}