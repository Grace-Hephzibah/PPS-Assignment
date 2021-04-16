#include<stdio.h>

int main()
{
    int a;
    float b;
   double c,d;


    printf("Enter an integer , a float and a double : \n");
    scanf("%d %f %e", &a, &b, &c);
    printf("\n");
    b= -b;
  /*  c= -c; */
    d =a-b-c;
    printf("%d     %f             %e",a,b,c);
    printf("The sum of the three entered numbers are : %e", d);
    return 0;
}
