#include <stdio.h>
int main()
{
  int a;

  printf("Input an integer : ");
  scanf("%d", &a);

  if (a%2 == 0)
    printf("%d is an even integer", a);
  else
    printf("%d is an odd integer", a);

    return 0;
}
