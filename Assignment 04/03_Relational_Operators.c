#include<stdio.h>

int main()
{
  int a,b;

  printf("Enter any two numbers : \n");
  scanf("%d %d", &a, &b);

  printf("\n 0 --> False \n 1 --> True \n");

  printf("\n Equal to Operator \t\t: %d", a==b);
  printf("\n Greater than \t\t\t: %d", a>b);
  printf("\n Greater than or equal to  \t: %d", a>=b);
  printf("\n Less than \t\t\t: %d", a<b);
  printf("\n Lesser than or equal to  \t: %d", a<=b);


  return 0;
}
