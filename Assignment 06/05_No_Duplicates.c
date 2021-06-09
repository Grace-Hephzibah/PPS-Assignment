#include <stdio.h>
int main()
{

    int n, dup;

    printf("Enter the number of elemets in the array : ");
    scanf("%d", &n);

    int a[n], new[n], size = -1;

    printf("Enter the numbers : ");
    // Input the array elements
    for (int i = 0; i < n; ++i)
    {
        dup = 0;
        scanf("%d", &a[i]);

        for (int j = 0; j <= size; j++)
        {
          if (a[i] == new[j])
          {
            dup = 1;
            break;
          }
        }

        if (dup == 0)
        {
          size++;
          new[size] = a[i];
        }
    }



    printf("Array without duplicates order \n");
    for (int i = 0; i <= size; i++)
        printf("%d \t", new[i]);

    return 0;

    }
