#include <stdio.h>

int main()
{
    int i, n, t1 = 1, t2 = 0, t;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series:");

    for (i = 1; i <= n; i++)
    {
        t = t1 + t2;
        printf("%d, ", t);
        t1 = t2;
        t2 = t;
    }

    return 0;
}
