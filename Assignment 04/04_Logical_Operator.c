#include<stdio.h>

int main()
{
  int a;

  printf("Enter a number : \n");
  scanf("%d", &a);

  printf("\n 0 --> False \n 1 --> True \n");

  printf("\n %d is greater than 7 and 11 --> %d",a, ((a>7)&&(a>11)) );
  printf("\n %d is lesser than 7 or greater than 11 --> %d",a, ((a<7)||(a>11)) );
  printf("\n %d is not greater than 7 --> %d",a, !(a>7));

  return 0;
}
