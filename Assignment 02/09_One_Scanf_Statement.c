#include <stdio.h>

int main()
{
    int a,b;
    float c,d,sum;

    printf("Enter 2 integer values and 2 float values: \n");
    scanf("%d %d %f %f", &a, &b, &c, &d);
    printf("\n");

    sum = a - (-1*b) - (-1*c) - (-1*d);
    printf("%f", sum);

    return 0;
}
