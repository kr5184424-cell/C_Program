/******************************************************************************
   Write a C program that rotates the elements of an array by n positions in a
specified direction.

Design:
         list of  variable 
                    a
                    n 
                    pos 
                    i
                    j
                    temp 
                    direction
         Expected Output
                    Enter size of array: 5
                    Enter array elements:
                    1 2 3 4 5
                    Enter number of positions: 2
                    Enter direction (L for Left, R for Right): L
                    Rotated array:
                    3 4 5 1 2
         
         

*******************************************************************************/
#include<stdio.h>

int main()
{
    int a[100], n, pos, i, j, temp;
    char direction;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of positions: ");
    scanf("%d", &pos);

    printf("Enter direction (L for Left, R for Right): ");
    scanf(" %c", &direction);

    pos = pos % n;

    if(direction == 'L' || direction == 'l')
    {
        for(i = 0; i < pos; i++)
        {
            temp = a[0];

            for(j = 0; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }

            a[n - 1] = temp;
        }
    }
    else if(direction == 'R' || direction == 'r')
    {
        for(i = 0; i < pos; i++)
        {
            temp = a[n - 1];

            for(j = n - 1; j > 0; j--)
            {
                a[j] = a[j - 1];
            }

            a[0] = temp;
        }
    }
    else
    {
        printf("Invalid direction");
        return 0;
    }

    printf("Rotated array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

