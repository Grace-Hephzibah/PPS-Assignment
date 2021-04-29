#include<stdio.h>

int main()
{
  int a,b,c, max2;

  printf("Enter three numbers : \n");
  scanf("%d %d %d", &a, &b, &c);

  if ( ((a>b) && (a<c)) || ((a<b) && (a>c)) )
    max2 = a;

  else if ( ((b>a) && (b<c)) || ((b<a) && (b>c)) )
    max2 = b;

  else
    max2 = c;

  printf("The Second Largest Number is %d", max2);

  return 0;
}
