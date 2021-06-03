#include <stdio.h>
int main()
{

    int x, n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers : ");

    // Input the array elements
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    // Each element is checked and the smallest element is
    // brought to the initial place

    for (int i = 0; i < n; i++) // Checking with ith element
    {
      for (int j = i + 1; j < n; j++) // Cheking with elements that have greater index value
      {
        if (a[i] > a[j])
          {
              // Swaping the value of the elements
              x =  a[i];
              a[i] = a[j];
              a[j] = x;
          }
        }
    }

    // Printing the ascending order
    printf("The numbers arranged in ascending order are given below \n");
    for (int i = 0; i < n; ++i)
        printf("%d \t", a[i]);

    return 0;

    }
