#include<stdio.h>

int main()
{
  float lit, dis, miles, gallon;

  printf("Enter the no of liters to fill the tank \n");
  scanf("%f", &lit);
  (lit > 0)? : printf("%.2f is an Invalid Input", lit) ;

  if(lit > 0 )
  {
    printf("Enter the distance covered \n");
    scanf("%f", &dis);
    (dis > 0)? :  printf("%.2f is an Invalid Input", dis);

    if (dis > 0)
    {
      miles = dis * 0.6214;
      gallon = lit * 0.2642;

      printf("Liters / 100KM \n%.2f \n", lit/(dis/100));
      printf("Miles / gallons \n%.2f \n", miles/gallon);
    }
  }

}
