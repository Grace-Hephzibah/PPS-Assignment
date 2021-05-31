#include <stdio.h>
#include <string.h>

int main()
{
  char a[100];

  printf("Enter the string : ");
  fgets(a, 100, stdin);

  int count= strlen(a);

  printf("The characters of the string in reverse are :");

  for(int i=count-1;i>=0;i--)
  {
    printf("%c", a[i]);
  }

  return 0;
}
