#include <stdio.h>

int tranverse(int A[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d \n", A[i]);
  }
  printf("\n");
  return 0;
}

int main()
{
  int A[5];
  int B[5] = {1, 2, 3, 4, 5};
  int C[10] = {1, 2, 3};
  int D[5] = {0};
  int E[] = {1, 2, 3, 4, 5, 6};

  tranverse(A, 5);
  tranverse(B, 5);
  tranverse(C, 10);
  tranverse(D, 5);
  tranverse(E, 6);

  // To find the address of an array using loops
  for (int i = 0; i < 5; i++)
  {
    printf("%u\n", &B[i]);
  }

  return 0;
}