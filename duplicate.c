/******************************************************************************
   Write a C program that uses a function to check whether a given number is a
    Perfect Number.
 Design:
        list of  variable :
             a[50] – Stores the array elements.
             n – Stores the size of the array.
             i – Controls the outer loop.
             j – Checks for duplicate elements.
             k – Shifts elements to the left when a duplicate is found.
             dup[50]
        list of date type : int
 Expected Output       
        Enter the size of the array: 6
        Enter the elements: 1 2 2 3 1 4

        Elements are: 1 2 2 3 1 4
        After deleting duplicate elements: 1 2 3 4
 Actual Output
        Enter the size of the array: 6
        Enter the elements: 1 2 2 3 1 4

        Elements are: 1 2 2 3 1 4
        After deleting duplicate elements: 1 2 3 4
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[50], j, k, i, dup[50], n;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        dup[i] = -1;
    }

    printf("\nElements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("\nAfter deleting duplicate elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


