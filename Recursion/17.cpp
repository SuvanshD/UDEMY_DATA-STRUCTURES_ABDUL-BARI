#include <stdio.h>
#include <iostream>

using namespace std;

int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return fact(n - 1) * n;
  }
}

int c(int n, int r)
{
  // General way
  //  int t1 = fact(n);
  //  int t2 = fact(r);
  //  int t3 = fact(n - r);

  // return t1 / (t2 * t3);

  // Pascal's Triangle

  if (r == 0 || n == r)
  {
    return 1;
  }
  else
  {
    return c(n - 1, r - 1) + c(n - 1, r);
  }
}

int main()
{
  printf("%d", c(4, 3));
  return 0;
}