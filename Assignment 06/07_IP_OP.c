#include<stdio.h>

int main()
{
  int n;

  printf("Number of elements in the array : ");
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    printf("\n %d element : ", i+1 );
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++)
  {
      printf("\n %d element : %d", i+1, a[i]);
  }

  return 0;
}
