/******************************************************************************
   Write a C program that takes a positive integer from the user and calculates its
factorial
 Design:
        list of  variable :
             x
             num
             fact
        list of date type : 
             int
 Expected Output       
             Enter the number: 5
             Factorial of 5 is 120
*******************************************************************************/
#include<stdio.h>

int factorial(int x);

int main()
{
    int num,fact;

    printf("Enter the number:");
    scanf("%d",&num);

    fact= factorial(num);

    printf("Factorial of %d is %d",num,fact);
    return 0;
}
int factorial(int x)
{
    if(x==1)
        return 1;
    return x*factorial(x-1);
}