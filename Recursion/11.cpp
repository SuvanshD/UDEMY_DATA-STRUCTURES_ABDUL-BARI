#include <stdio.h>
#include <iostream>

using namespace std;

int sum(int n)
{
  // Using Recursion
  if (n == 0)
  {
    return 0;
  }
  else
  {
    return sum(n - 1) + n;
  }

  // Using direct formula
  // return (n * (n + 1)) / 2;

  // Using LOOP
  // int i, s = 0;
  // for (i = 1; i <= n; i++)
  // {
  //   s = s + i;
  // }
  // return s;
}
int main()
{
  int x = 5;
  int r = sum(5);
  printf("%d", r);
  return 0;
}