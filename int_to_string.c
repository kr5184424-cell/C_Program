/******************************************************************************
   Write a C program that takes an integer from the user and converts it into a
string of characters.
 Design:
        list of  variable :
            i
            val
            len
            str
            temp
        list of date type : 
             char
             int
 Expected Output       
             Enter Number: 234123
              Output     :234123
*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,val,len;
    char str[50],temp;
    printf("Enter Number:");
    scanf("%d",&val);
    while(val>0)
    {
        str[i]=(val%10)+48;
        val/=10;
        i++;
    }
    str[i]='\0';
    len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    str[len]='\0';
    printf("%s",str);
    return 0;
}