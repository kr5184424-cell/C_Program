/******************************************************************************
   Write a C program that takes a string of digits from the user and converts it into
its equivalent integer value.
 Design:
        list of  variable :
             num
             val
        list of date type : 
             char
             int
 Expected Output       
             234123
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char num[100] = "234123";
    int val;

    sscanf(num, "%d", &val);

    printf("%d", val);

    return 0;
}