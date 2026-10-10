/******************************************************************************
   Write a C program that takes a string from the user and converts all uppercase
letters into their corresponding lowercase letters.
 Design:
        list of  variable :
            ch
        list of date type : 
             char
 Expected Output       
             Enter Upper Case Letter: A
             Result = a
*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    printf("\nEnter Upper Case Letter: ");
    scanf("%c", &ch);
    ch = ch + 32;
    printf("\nResult = %c", ch);
    return 0;
}