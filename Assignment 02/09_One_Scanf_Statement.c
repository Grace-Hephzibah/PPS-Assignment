#include <stdio.h>

int main()
{
    int a,b;
    float c,d,sum;

    printf("Enter 2 integer values : \n");
    scanf("%d %d", &a, &b);
    printf("\n");

    printf("Enter 2 float values : \n");
    scanf("%f %f", &c, &d);
    printf("\n");

    sum = a - (-1*b) - (-1*c) - (-1*d);
    printf("%f", sum);

    return 0;
}
