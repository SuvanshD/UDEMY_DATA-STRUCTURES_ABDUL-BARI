#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <iterator>
int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a;
  double b;
  vector<string> c(10);
  string d = "HackerRank ";

  cin >> a >> b;

  for (int i = 0; i < 10; i++)
  {
    getline(cin, c[i]);
  }

  int e = a + 4;
  double f = b + 4;

  cout << e << endl;
  printf("%0.1lf\n", f);

  for (int i = c.max_size(); i >= 0; i--)
  {
    c[i + 1] = c[i];
  }
  c[0] = d;

  for (int i = 0; i < 10; i++)
  {
    cout << c[i];
  }

  return 0;
}
