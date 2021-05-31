#include<stdio.h>

int main()
{
  int n;
  printf("Number of elements in the 1st array : ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    printf("\n %d element : ", i+1 );
    scanf("%d", &a[i]);
  }

  int num;
  printf("\n Number of elements in the 2nd array : ");
  scanf("%d", &num);
  int b[num];
  for (int i = 0; i < num; i++)
  {
    printf("\n %d element : ", i+1 );
    scanf("%d", &b[i]);
  }

  int c[num+n];
  for (int i = 0; i < num+n; i++)
  {
      if (i < n)
        c[i] = a[i];

      else
        c[i] = b[i-n];

      printf("\n %d element : %d", i+1, c[i]);
  }

  return 0;
}
