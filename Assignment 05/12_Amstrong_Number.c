#include<stdio.h>
int main()
{

int num, x, sum;
printf("Enter the number = ");
scanf("%d",&num);

int i = num;

sum = 0;
while(num>0)
{
  x = num%10;
  sum += (x*x*x);
  num /= 10;
}
if(i == sum)
  printf("The %d is an Amstrong Number.", i);
else
  printf("The %d is not an Amstrong Number.", i);
return 0;
}
