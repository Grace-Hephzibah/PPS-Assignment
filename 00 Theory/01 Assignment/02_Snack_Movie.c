#include<stdio.h>

int main()
{
  int tp, pizza, puff, coolDrink;

  printf("Enter the no of pizzas bought:");
  scanf("%d",&pizza);

  printf("Enter the no of puffs bought:");
  scanf("%d",&puff);

  printf("Enter the no of cool drinks bought:");
  scanf("%d",&coolDrink);

  printf("\n\nBill Details\n");
  printf("No of pizzas: %d\n",pizza);
  printf("No of puffs: %d\n",puff);
  printf("No of cooldrinks: %d\n",coolDrink);

  tp = (pizza*100) + (puff*20) + (coolDrink*10);
  printf("Total price= %d\n",tp);

  return 0;
}
