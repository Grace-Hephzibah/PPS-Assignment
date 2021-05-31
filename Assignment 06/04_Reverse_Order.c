#include <stdio.h>
int main()
{

    int n;

    printf("Enter the number of elemets in the array : ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the numbers : ");
    // Input the array elements
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    // Printing the reverse order
    printf("Array in reverse order \n");
    for (int i = n-1; i >= 0; i--)
        printf("%d \t", a[i]);

    return 0;

    }
