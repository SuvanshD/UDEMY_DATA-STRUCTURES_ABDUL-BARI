#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
  // Using only stack
  // int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  // Using Partial Heap
  int *A[3];
  A[0] = new int[4];
  A[1] = new int[4];
  A[2] = new int[4];

  // Using Complete Heap
  // int **A;
  // A = new int *[3];
  // A[0] = new int[4];
  // A[1] = new int[4];
  // A[2] = new int[4];

  // Adding values to the array

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (j % 2 == 0)
      {
        A[i][j] = 20;
      }
      else
      {
        A[i][j] = 0;
      }
    }
  }

  // Accessing 2-D array
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << A[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}
