#include<stdio.h>

int main()
{
  char x, encrypt;
  int shift_key = 3;

  printf("Enter a Character: ");
  scanf("%c", &x);

  encrypt = x + shift_key;

  printf("Encrypted Code : %c", encrypt);

  return 0;
}
