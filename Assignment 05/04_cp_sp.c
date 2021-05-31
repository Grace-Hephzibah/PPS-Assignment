#include<stdio.h>

int main()
{
  int cp, sp;
  // cp -> Cost Price
  // sp -> Selling Price

  printf("Input Cost Price: ");
  scanf("%d", &cp);
  printf("\nInput Selling Price: ");
  scanf("%d", &sp);

  if (sp > cp)
    printf("You can have booked your profit amount: %d", sp-cp);

  else if (sp < cp)
    printf("You can have booked your loss amount: %d", cp-sp);

  else // sp == cp
      printf("You can have booked no amount. ");

  return 0;
}
