#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Ascii Value: ");
    scanf("%d", &n);

    // Type casting from integer to character

    printf("Character value of %d = %c", n, n);

    return 0;
}
