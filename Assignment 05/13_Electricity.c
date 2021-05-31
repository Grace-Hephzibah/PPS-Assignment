#include <stdio.h>
int main()
{
  int id,units;
  char name[30];
  float amt, sur=0,net;
  printf("enter the customer id :");
  scanf("%d",&id);
  printf("enter the customer name :");
  scanf("%s", name);
  printf("enter the units consumed:");
  scanf("%d",&units);
  printf("\n\nCustomer ID NO : %d\n",id);
  printf ("Customer Name : %s \n", name);
  printf("units consumed : %d \n",units);
  if (units<200 )
  {
       amt = units *1.2;  printf("Amount charges at Rs. 1.20 with minimum Rs.100  : ");
  }
  else if (units <400)
  {
       amt = units *1.5; printf("Amount charges at Rs. 1.50  : ");
  }
  else if (units<600)
  {
       amt = units *1.8; printf("Amount charges at Rs. 1.80  : ");
  }
  else
  {
       amt = units *2.0; printf("Amount charges at Rs 2.00  : ");
  }
  if (amt < 100)  amt =100;
  if (amt >400) sur = amt * 0.15;
  net = amt + sur;
  printf(" %.2f \n",amt);
  printf("Surcharge Amount : %.2f \n",sur);
  printf("The Net Bill Amount : %.2f",net);
  return 0;
}
