/******************************************************************************
   Write a C program that uses an array to find the second largest and second
smallest element in a list of numbers.
 Design:
        list of  variable :
             temp	Temporarily stores a value during swapping.
             x[10]	Stores up to 10 array elements.
             i	    Controls the outer loop of Bubble Sort.
             j	    Controls the inner loop and array traversal.
             n  	Stores the number of elements entered by the user
        list of date type : 
             int
 Expected Output       
         Enter total number of elements: 5
         Enter the elements: 10 40 20 50 30

         Numbers before sort:   10  40  20  50  30
         Numbers after sort:   10  20  30  40  50
         Second largest number = 40
         Second smallest number = 20

*******************************************************************************/


#include <stdio.h>

int main()
{
    int temp, x[10], i, n, j;

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 10)
    {
        printf("Enter a size between 2 and 10.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("\nNumbers before sort: ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", x[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }

    printf("\nNumbers after sort: ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", x[i]);
    }

    printf("\nSecond largest number = %d", x[n - 2]);
    printf("\nSecond smallest number = %d\n", x[1]);

    return 0;
}
