#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
  string s = {1, 2, 3, 4, 5};
  int *P = new int[5];
  for (int i = 0; i < 5; i++)
  {
    P[i] = s[i];
  }
  int *Q = new int[10];

  for (int i = 0; i < 5; i++)
  {
    Q[i] = P[i];
  }
  delete[] P;
  P = Q;
  Q = NULL;

  P[5] = 323;
  P[6] = 1223;

  cout << P[5] << endl
       << P[6];

  return 0;
}