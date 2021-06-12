#include<stdio.h>

int main()
{
  int i = 1,j;

  for(;;)
  {
    if(i)
      j = --i;

    if(j<5)
    {
      printf("advance ", j++);
    }
    else
      break;

  }

  return 0;
}

// Output -> Option 3
// advance advance advance advance advance

// advance is printed 5 times
