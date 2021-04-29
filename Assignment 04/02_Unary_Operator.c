#include<stdio.h>

int main()
{
  int a;

  printf("Enter a number : \n");
  scanf("%d", &a);

  printf("\nPre Fix For Addition\n");
  printf("Initial Value : %d\n", ++a);
  printf("Final Value : %d\n", a);

  printf("\nPost Fix For Addtion\n");
  printf("Initial Value : %d\n", a++);
  printf("Final Value : %d\n", a);

  printf("\nPre Fix For Subtraction\n");
  printf("Initial Value : %d\n", --a);
  printf("Final Value : %d\n", a);

  printf("\nPost Fix For Subtraction\n");
  printf("Initial Value : %d\n", a--);
  printf("Final Value : %d\n", a);

  return 0;
}
