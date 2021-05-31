#include <stdio.h>

int main()
{
  int age;

  printf("Input the age of the candidate : ");
  scanf("%d",&age);

  if (age >= 18)
    printf("Congratulation! You are eligible for casting your vote.\n");

  else
    printf("Alas! You are not eligible to caste your vote.\n");

  return 0;
}
