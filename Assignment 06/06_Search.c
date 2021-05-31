#include<stdio.h>

int main()
{
  int n;

  printf("Number of elements in the array : ");
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    printf("\n %d element : ", i+1 );
    scanf("%d", &a[i]);
  }

  int search;
  printf("\n The search element is : ");
  scanf("%d", &search);

  for (int i = 0; i < n; i++)
  {
    if(a[i] == search)
      printf("The search element is found at %d \n", i+1);
  }

  return 0;
}
