#include <stdio.h>

int main()
{
    int a, b, q, r;

    printf("Enter the 1st number : \n");
    scanf("%d",&a);
    printf("\n");

    printf("Enter the 2nd number : \n");
    scanf("%d",&b);
    printf("\n");

    q = a/b;
    r = a - b*q;

    printf("The quotient is %d. \n", q);
    printf("The remainder is %d. \n", r);

    return 0;
}
