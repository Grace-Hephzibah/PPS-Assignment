#include<stdio.h>

int main()
{
  int a,b;

  printf("Enter any two numbers : \n");
  scanf("%d %d", &a, &b);

  printf("\n Sum \t\t: %d", a+b);
  printf("\n Difference \t: %d", a-b);
  printf("\n Division \t: %.3f", (float) a/b);
  printf("\n Remainder \t: %d", a+b);

  return 0;
}
