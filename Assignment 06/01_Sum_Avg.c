#include<stdio.h>

int main()
{
  int n;
  float avg, sum = 0.0;

  printf("Number of elements in the array : ");
  scanf("%d", &n);

  float a[n];

  for (int i = 0; i < n; i++)
  {
    printf("\n %d element : ", i+1 );
    scanf("%f", &a[i]);
    sum += a[i];
  }

  avg = sum/n;

  printf("\n The sum of the array is %d. \n The average of the array is %.3f.", sum, avg);

  return 0;
}
