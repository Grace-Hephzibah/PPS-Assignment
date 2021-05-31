#include <stdio.h>
int main() {
    int ch,a,b;
    printf("1. CIRCLE\n");
    printf("2. SQUARE\n");
    printf("3. RECTANGLE\n");
    printf("4. PARALLELOGRAM\n");
    printf("5. RHOMBUS\n\n");
    printf(" ENTER YOUR CHOICE 1 to 5 TO CALCULATE THE AREA: ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1 :
            printf("ENTER THE RADIUS ");
            scanf("%d",&a);
            printf("THE AREA OF THE CIRCLE IS : %.2f\n",3.14*a*a);
            break;
        case 2:
            printf("ENTER THE SIDE OF THE SQUARE ");
            scanf("%d",&a);
            printf("THE AREA OF THE SQUARE IS : %d",a*a);
            break;
        case 3:
            printf("ENTER THE SIDES OF THE RECTANGLE ");
            scanf("%d %d",&a,&b);
            printf("THE AREA OF THE RECTANGLE IS : %d",a*b);
            break;
        case 4:
            printf("ENTER THE BASE AND HEIGHT OF THE PARALLELOGRAM ");
            scanf("%d %d",&a,&b);
            printf("THE AREA OF THE PARALLELOGRAM IS : %d",a*b);
            break;
        case 5 :
            printf ("ENTER THE TWO DIAGONALS OF THE RHOMBUS ");
            scanf("%d %d",&a,&b);
            printf("THE AREA OF THE RHOMBUS IS : %.2f",1/2.0*a*b);
            break;
    }
    return 0;
}
