#include<stdio.h>

int GCD(int a, int b)
{
  if(a==b)
    return(a);
  else if (a>b)
    return GCD(a-b,b);
  else
    return GCD(a, b-a);
}

int main()
{
  int test1, test2;

  printf("Enter 2 numbers : ");
  scanf("%d %d", &test1, &test2);

  int ans = GCD(test1,test2);

  printf("The HCF or GCD of %d and %d is %d.", test1, test2, ans);

  return 0;
}
