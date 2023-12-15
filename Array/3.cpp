#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
  // Implement Static ARRAY

  int A[5] = {1, 2, 3, 4, 5};

  printf("\nElemnts of Array are: \n");
  for (int i = 0; i < 5; i++)
  {
    cout << A[i] << endl;
  }

  // Implement Dynamic ARRAY
  int n;
  int sum = 0;

  printf("\nEnter the size of the array: ");
  cin >> n;

  int *B = new int[n];

  cout << endl
       << "\nEnter " << n << " elements for the array: ";
  cout << "\n";
  for (int i = 0; i < n; i++)
  {
    cin >> B[i];
  }
  printf("\n");
  for (int i = 0; i < n; i++)
  {
    sum += B[i];
  }
  cout << sum << endl;
  printf("\n");
  return 0;
}