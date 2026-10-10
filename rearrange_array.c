/******************************************************************************
   Write a C program that merges two sorted arrays into a single sorted array
without using any sorting function.

Design:
         list of  variable 
                    rr, temp, n, i, j
         Expected Output
                    Enter size of array: 6
                    Enter elements:
                    -2 5 -8 3 -1 4
                  
                    Rearranged array:
                    -2 -8 -1 5 3 4
         
         

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, i, j = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    
    for(i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    
    for(i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    printf("Rearranged array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

