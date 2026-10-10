/******************************************************************************
   Write a C program that uses a recursive function to find the GCD of two
numbers using the Euclidean algorithm
 Design:
        list of  variable :
             n1
             n2
             i
             gcd
        list of date type : 
             int
 Expected Output       
             Enter 2 numbers: 12 18
             G.C.D of 12 and 18 is 6
*******************************************************************************/
 

#include <stdio.h>

int Fun(int n1, int n2)
{
    int i, gcd = 1;

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main()
{
    int n1, n2, gcd;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    gcd = Fun(n1, n2);

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
