/******************************************************************************
Write a C program that takes an integer from the user and determines whether
the number is even or odd.
 
 Design:
        list of  variable : n
        list of date type : int
        Description : Stores the integer entered by the user
  Expected output
           
          Example 1 — Positive even number:

           Enter a whole number: 10
            10 is an even number.
         
         Example 2 — Positive odd number:

            Enter a whole number: 7
            7 is an odd number.

          Example 3 — Negative even number:

             Enter a whole number: -8
              -8 is an even number.

          Example 4 — Negative odd number:

              Enter a whole number: -5
              -5 is an odd number.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf ("%d'",&n);
    
    
    if(n%2==0)
{
    printf("it's a even number");
}
else
{
   printf("it's a odd number");
    
}
  return 0;
  
}
    
