#include<stdio.h>

int main()
{
  int p, n, r;
  float si;

  printf("Enter the Principal Amount : ");
  scanf("%d", &p);

  printf("\nEnter the Time (in years) : ");
  scanf("%d", &n);

  printf("\nEnter the Rate of Interest : ");
  scanf("%d", &r);

  si = ((float)(p*n*r))/100;
  printf("The Simple Interest : %.2f", si);
  return 0;
}
