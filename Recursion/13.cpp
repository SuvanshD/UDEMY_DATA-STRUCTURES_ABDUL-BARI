#include <stdio.h>
#include <iostream>

using namespace std;

int pow(int m, int n)
{
  // First Way (slower)
  //  if (n == 0)
  //  {
  //    return 1;
  //  }
  //  else
  //  {
  //    return pow(m, n - 1) * m;
  //  }

  // Second Way(faster)
  if (n == 0)
  {
    return 1;
  }
  else if (n % 2 == 0)
  {
    return pow(m * m, n / 2);
  }
  else
  {
    return m * pow(m * m, (n - 1) / 2);
  }

  // Using LOOPS
  // int j = 1;
  // for (int i = 1; i <= n; i++)
  // {
  //   j = j * m;
  // }
  // return j;
}
int main()
{
  int x = 2, y = 9;
  int r = pow(x, y);
  cout << r << endl;
  return 0;
}