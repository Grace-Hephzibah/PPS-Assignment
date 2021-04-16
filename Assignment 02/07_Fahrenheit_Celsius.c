#include<stdio.h>
int main()
{
  float fahrenheit, celsius;
  printf("Enter the value of temperture in Celsius : \n");
  scanf("%f", &celsius);
  printf("\n");

  fahrenheit =( (celsius*9)/5)+32;

  printf("Temperature in Fahrenheit is: %.4f",fahrenheit);

  return (0);
}
