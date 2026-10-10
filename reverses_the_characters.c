/******************************************************************************
   Write a C program that takes a string from the user and reverses its characters
using an iterative approach.
 Design:
        list of  variable :
            i
            l
            str
        list of date type : 
             char
             int
 Expected Output       
             Enter a sentence: hello
             olleh
*******************************************************************************/

#include<stdio.h>
int main()
{
    int i,l;
    char str[20];
    printf("Enter a sentence: ");
    scanf("%s",str);
    l=0;
    while(str[l]!='\0')
    {
        l++;
    }
    i=l-1;
    while(i>=0)
    {
        printf("%c",str[i]);
        i--;
    }
    return 0;
}