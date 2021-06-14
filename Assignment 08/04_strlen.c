#include <stdio.h>
#include<string.h>

int main()
{
    char s[100];
    printf("Enter the string \n");
    gets(s);

    int i;
    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of the string is %d", i);
    return 0;
}
