#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];

   printf("Enter the string: ");
   gets(str);

   for(int i = 0; i <= strlen(str); i++)
      if( str[i] >= 65 && str[i] <= 90)
         str[i] = str[i] + 32;

   printf("\nLower Case String is: \n");
   puts(str);
   
   return 0;
}
