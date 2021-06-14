#include<stdio.h>
#include<string.h>

void printString(char*);

void printString(char *str)
{
  printf("The string is \n");
  puts(str);
}

int main()
{
  char s[100];

  printf("Enter the string \n");
  gets(s);

  printString(s);

  return 0;
}
