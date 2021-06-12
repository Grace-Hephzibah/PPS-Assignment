#include <stdio.h>

int main()
{
   int rows, k = 0;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (int i = 1; i <= rows; i++)
   {
     k = 0;
      for (int space = 1; space <= rows - i; space++)
      {
         printf("  ");
      }
      while (k != 2 * i - 1)
      {
         printf("* ");
         ++k;
      }

      printf("\n");
   }

   for (int i = rows; i >= 1; i--)
   {
       for (int space = 0; space < rows - i; space++)
          printf("  ");

       for (int j = i; j <= 2 * i - 1; j++)
          printf("* ");

       for (int j = 0; j < i - 1; j++)
          printf("* ");

       printf("\n");
    }

   return 0;
}
