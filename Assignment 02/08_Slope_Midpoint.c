#include <stdio.h>

int main()
{
    int x1, x2, y1, y2;
    float midx, midy, slope;

    printf("Enter the x co-ordinate of 1st point : \n");
    scanf("%d",&x1);
    printf("\n");

    printf("Enter the y co-ordinate of 1st point : \n");
    scanf("%d",&y1);
    printf("\n");

    printf("Enter the x co-ordinate of 2nd point : \n");
    scanf("%d",&x2);
    printf("\n");

    printf("Enter the y co-ordinate of 2nd point : \n");
    scanf("%d",&y2);
    printf("\n");

    midx = (x1 + x2)/2;
    midy = (y1 + y2)/2;

    printf("The midpoint of (%d,%d) and (%d,%d) is (%.1f,%.1f) . \n", x1, y1, x2, y2, midx, midy);

    slope = ((float)(y2 - y1)) / (x2 - x1);

    printf("The slope of (%d,%d) and (%d,%d) is %.3f . \n", x1, y1, x2, y2, slope);

    return 0;
}
