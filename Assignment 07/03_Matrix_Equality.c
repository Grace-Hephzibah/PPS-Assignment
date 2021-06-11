#include <stdio.h>

int main()
{
   int m, n;

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   int first[m][n], second[m][n];

   printf("Enter the elements of first matrix\n");
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
         scanf("%d", &first[i][j]);
       printf("\n");
    }

   printf("Enter the elements of second matrix\n");
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
         scanf("%d", &second[i][j]);
      printf("\n");
    }

    int check = 1;

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
        if (first[i][j] != second[i][j])
        {
          check = 0;
          break;
        }


      if (check == 0)
        break;
   }

   if (check == 0)
    printf("The matrices are not equal");
  else
    printf("The matrices are equal");

   return 0;
}
