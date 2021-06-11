#include<stdio.h>

int main()
{
  int n = 2;
  int a[n][n][n];

  printf("Enter the Array Elements");
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
     for(int k = 0; k < n; k++)
      scanf("%d", &a[i][j][k]);

  printf("\n\n The 3D Array Elements are \n\n");
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      for(int k = 0; k < n; k++)
        printf("%d\t", a[i][j][k]);

      printf("\n");
    }

    printf("\n");
  }

}
