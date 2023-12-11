#include <stdio.h>
#include <iostream>

using namespace std;

int y = 5;

int fun(int n)
{
  static int x = 0;
  if (n > 0)
  {
    x++;
    return fun(n - 1) + x;
  }
  return 0;
}
int fun1(int n)
{
  if (n > 0)
  {
    y++;
    fun1(n - 1);
    return (y);
  }
  return 0;
}

int main()
{
  int x = 5;
  printf("%d \n %d", fun(x), fun1(x));
  return 0;
}