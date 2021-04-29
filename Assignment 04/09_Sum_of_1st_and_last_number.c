#include<stdio.h>

int main()
{
  int a, sum, l, f;

  printf("Enter a number : \n");
  scanf("%d", &a);

  f = a;

  l = a%10;
  while (f>=10)
    f = f/10;

  sum = l+f;

  printf("The sum of first and last number is %d", sum);

  return 0;
}
