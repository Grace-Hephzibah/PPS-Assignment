#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // Type casting from character to integer

    printf("ASCII value of %c = %d", c, c);

    return 0;
}
