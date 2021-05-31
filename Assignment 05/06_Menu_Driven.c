#include <stdio.h>
int main()
{
  int a,b, op;
  printf("Option \n 1 -> Addition\n 2 -> Subtraction\n 3 -> Multiplication\n 4 -> Division");
  printf("\nEnter Number 1, Number 2 and the Operator   Number : \n");
  scanf("%d %d %d", &a, &b, &op);

  switch(op)
  {
    case 1:
      printf("The Addition of  %d and %d is: %d",a, b, a+b);
      break;
    case 2:
      printf("The Substraction of %d  and %d is: %d",a, b, a-b);
      break;
    case 3:
      printf("The Multiplication of %d  and %d is: %d",a, b, a*b);
      break;

    case 4:
      printf("The Division of %d  and %d is : %d",a, b, a/b);
      break;

    default:
      printf("This operator is not among the options");
  }

  return 0;
}
