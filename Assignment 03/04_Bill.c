#include<stdio.h>

int main()
{
  float price_samosa, price_coffee, bill_amount;

  printf("Enter the price of 1 Samosa : ");
  scanf("%f", &price_samosa);
  printf("\n");

  printf("Enter the price of 1 Coffee : ");
  scanf("%f", &price_coffee);
  printf("\n");

  bill_amount = price_coffee + price_samosa;

  printf("The total amount is : %.2f", bill_amount);
  return 0;
}
