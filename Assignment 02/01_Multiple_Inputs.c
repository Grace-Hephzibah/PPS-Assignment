#include <stdio.h>

int main()
{
    char name[20], dept[20], spec[10], sec[5];

    printf("Enter your Name : \n");
    scanf("%s", name);
    printf("\n");

    printf("Enter your Department : \n");
    scanf("%s", dept);
    printf("\n");

    printf("Enter your Specialization : \n");
    scanf("%s", spec);
    printf("\n");

    printf("Enter your Section : \n");
    scanf("%s", sec);
    printf("\n");

    printf("Name : %s \n", name);
    printf("Class : %s %s %s",  dept, spec, sec);

    return 0;
}
