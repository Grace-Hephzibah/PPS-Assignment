#include<stdio.h>

int main()
{
  int n;

  printf("Number of elements in the array : ");
  scanf("%d", &n);

  int a[n], dum;

  for (int i = 0; i < n; i++)
  {
    printf("\n %d element : ", i+1 );
    scanf("%d", &a[i]);
  }

  int insert, pos;
  printf("\n Enter the element to be inserted : ");
  scanf("%d", &insert);
  printf("\n Enter the Position : ");
  scanf("%d", &pos);

  for (int i = 0; i <= n; i++)
  {
      if (i < pos)
        printf("\n The %d element: %d", i+1, a[i]);

      else
      {
          dum = a[i];
          a[i] = insert;
          insert = dum;

          printf("\n The %d element: %d", i+1, a[i]);
      }
  }

  return 0;
}
