#include<stdio.h>
#include<string.h>

int main()
{
  char str1[100], str2[100], t[100];

  printf("Enter the first string : \n");
  gets(str1);

  printf("Enter the second string : \n");
  gets(str2);

  strcpy(t, str1);
  strcpy(str1, str2);
  strcpy(str2, t);

  printf("The swap of the strings are \n");
  puts(str1);
  puts(str2);

  return 0;
}
