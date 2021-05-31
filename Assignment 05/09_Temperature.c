#include <stdio.h>
int main()
{
  int temp;
  printf("enter the temperature in centigrade :");
  scanf("%d",&temp);
  if (temp >= 40)
      printf("Its Very Hot");
  else if(temp >=30)
      printf("Its Hot");
  else if (temp >=20)
      printf("Normal in Temp");
  else if (temp >=10)
      printf("Cold weather");
  else if (temp >= 0)
      printf("Very Cold weather");
  else
      printf("Freezing weather");
  return 0;
}
