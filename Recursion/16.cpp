#include <stdio.h>
#include <iostream>

using namespace std;

int F[10];

int fib(int n)
{
  // Using direct recursion
  //  if (n <= 1)
  //  {
  //    return n;
  //  }
  //  else
  //  {
  //    return fib(n - 2) + fib(n - 1);

  //  }
  // Using LOOP
  // int t0 = 0, t1 = 1, S;
  // if (n <= 1)
  // {
  //   return n;
  // }
  // else
  // {
  //   for (int i = 2; i <= n; i++)
  //   {
  //     S = t0 + t1;
  //     t0 = t1;
  //     t1 = S;
  //   }
  //   return S;
  // }

  // Using memoization
  if (n <= 1)
  {
    F[n] = n;
    return n;
  }
  else
  {
    if (F[n - 2] == -1)
    {
      F[n - 2] = fib(n - 2);
    }
    if (F[n - 1] == -1)
    {
      F[n - 1] = fib(n - 1);
    }

    return F[n - 2] + F[n - 1];
  }
}

int main()
{
  // Declare all the values of F[] as -1
  int i;
  for (i = 0; i < 10; i++)
  {
    F[i] = -1;
  }

  // Print the Output
  printf("%d", fib(5));
  return 0;
}