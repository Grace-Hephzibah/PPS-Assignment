#include <stdio.h>

int main ()
{
   char str[20];

   printf("Enter your full name : \n");
   gets(str);
   printf("\n");

   printf("Hey there, %s !", str);

   return(0);
}
