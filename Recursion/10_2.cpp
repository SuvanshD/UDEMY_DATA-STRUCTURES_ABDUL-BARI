// NESTED RECURSION

#include <stdio.h>
#include <iostream>

using namespace std;

int fun(int n)
{
  if (n > 100)
  {
    return (n - 10);
  }
  else
  {
    return fun(fun(n + 11));
  }
}
int main()
{
  int x = 95;
  int r = fun(x);
  printf("%d", r);
  return 0;
}
