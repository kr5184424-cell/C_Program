/******************************************************************************
   Write a C program that takes an integer from the user and converts it into a
string of characters.
 Design:
        list of  variable :
            str
            i
            length
            flag
        list of date type : 
             char
             int
 Expected Output       
             Enter your Name:karthik
             madam is not a Palindrome
*******************************************************************************/
#include<stdio.h>
int main()
{
    char str[20];
    int i, length, flag=0;
    printf("Enter your Name: ");
    scanf("%s",str);

    length=0;
    while(str[length]!='\0')
    {
        length++;
    }
    //comparing name with reversed name
    for(i=0; i<length; i++)
    {
        if(str[i] != str[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("\n%s is not a Palindrome",str);
    }
    else
    {
        printf("\n%s is a Palindrome",str);
    }
    return 0;
}
