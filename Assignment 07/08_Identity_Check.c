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
        if ((first[i][j] == 0 && i!=j) || (first[i][j] == 1 && i==j)) continue;

        else
        {
          check = 0;
          break;
        }
      }

      if (check == 0) break;
   }

   if (check == 0 || m!=n)
    printf("The matrix is not an identity matrix");
  else
    printf("The matrix is an identity matrix");

   return 0;
}
