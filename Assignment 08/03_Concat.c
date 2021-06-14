#include<stdio.h>
#include<string.h>

int main()
{
  char str1[10], str2[10];

  printf("Enter the first string : \n");
  gets(str1);

  printf("Enter the second string : \n");
  gets(str2);

  strcat(str1, str2);

  printf("The concatenated the string is \n");
  puts(str1);

  return 0;
}
