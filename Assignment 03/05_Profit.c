#include<stdio.h>

int main()
{
  int profit;
  float share;

  printf("Enter the Profit : ");
  scanf("%d", &profit);

  share = (float) profit/4;

  printf("Each team member will receive : %.3f", share);

  return 0;

}
