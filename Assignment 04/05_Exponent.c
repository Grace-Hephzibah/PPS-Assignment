#include<stdio.h>

int main()
{
  int a,b, exp;

  printf("Enter a number : \n");
  scanf("%d", &a);

  printf("Enter the exponent: \n");
  scanf("%d", &b);

  exp = 1;
  while(b--)
    exp *= a;

  printf("Exponent value : %d", exp);

  return 0;
}
