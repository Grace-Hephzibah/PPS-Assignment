#include<stdio.h>

int main()
{
  int d, out;
  char x;

  printf("Enter a integer : ");
  scanf("%d", &d);

  printf("\nEnter a Character : ");
  scanf("\n");
  scanf("%c", &x);

  out = x+d;

  printf("The Output is  %c and %d", out, out);
}
