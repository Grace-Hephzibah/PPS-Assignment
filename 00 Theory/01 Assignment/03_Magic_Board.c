#include<stdio.h>
#include <stdlib.h>
int main()
{
  int a,b,c,d;
  printf("Enter the digits: \n");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  printf("\n\n");
  printf("%d - %c\n", a, (char)a );
  printf("%d - %c\n", b, (char)b );
  printf("%d - %c\n", c, (char)c );
  printf("%d - %c\n", d, (char)d );
  return 0;
}
