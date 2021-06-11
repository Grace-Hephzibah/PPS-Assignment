#include <stdio.h>

int main()
{
   int m, n;

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);

   int first[m][n];
   printf("Enter the elements of matrix\n");

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
         scanf("%d", &first[i][j]);
    }

    int check = 1;

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
        if (first[i][j] != first[j][i])
        {
          check = 0;
          break;
        }
      }

      if (check == 0) break;
   }

   if (check == 0)
    printf("The matrix is not symmetric");
  else
    printf("The matrix is symmetric");

   return 0;
}
