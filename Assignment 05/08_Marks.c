#include <stdio.h>
int main() {
    int p,c,m;
    printf("INPUT THE MARKS OBTAINED IN PHYSICS : ");
    scanf("%d",&p);
    printf("INPUT THE MARKS OBTAINED IN CHEMISTRY : ");
    scanf("%d",&c);
    printf("INPUT THE MARKS OBTAINED IN MATHEMATICS : ");
    scanf("%d",&m);
    if ((p>=55) && (c>= 50) && (m>=65) && ((p+c+m) >=190 || (m+p)>=140))
     printf("The candidate is  eligible.");
    else
    printf("The candidate is not eligible.");
    return 0;
}
