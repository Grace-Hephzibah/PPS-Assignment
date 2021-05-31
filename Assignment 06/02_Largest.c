#include<stdio.h>

int main()
{
  int n;

  printf("Number of elements in the array : ");
  scanf("%d", &n);

  int a[n], max, max2;

  for (int i = 0; i < n; i++)
  {
    printf("\n %d element : ", i+1 );
    scanf("%d", &a[i]);

    if (i == 0)
      max = a[i];

    else
    {
      if (max < a[i])
      {
        max = a[i];
        printf("\n Max %d", max);
      }
    }

  }

  int count = 0;

  for(int i = 0; i < n; i++)
  {
    if ((count == 0) && (a[i] != max))
      max2 = a[i];

    else
    {
      count++;
      if ((max2 < a[i]) && (a[i] != max))
        max2 = a[i];
    }
  }

  printf("Largest and Second Largest are %d and %d respectively.", max, max2);


  return 0;
}
