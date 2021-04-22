#include<stdio.h>

int main()
{
  int d;
  char x;

  printf("Enter a integer : ");
  scanf("%d", &d);

  printf("\nEnter a Character : ");
  scanf("\n");
  scanf("%c", &x);

  x = x+d;

  printf("The Output is  %c", x);
}
