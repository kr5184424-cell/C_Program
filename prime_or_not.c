/******************************************************************************
Write a C program that takes an integer from the user and determines whether
the number is even or odd.
 
 Design:
        list of  variable : n, i, count
        list of date type : int
       
  Expected output
           
         For 7:

          Enter the number: 7
          It's a prime number

         For 10:

          Enter the number: 10
          It's not a prime number

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("It's a prime number");
    }
    else
    {
        printf("It's not a prime number");
    }

    return 0;
}
