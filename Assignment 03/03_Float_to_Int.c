#include <stdio.h>

int main()
{
    float f;
    int i;
    printf("Enter a value (float): ");
    scanf("%f", &f);

    // Implicit type Conversion
    i = f;

    printf("The Float Value of %.4f = %d", f, i);

    return 0;
}
