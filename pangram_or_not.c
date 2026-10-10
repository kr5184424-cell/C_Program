/******************************************************************************
   Write a C program that takes a string input from the user and determines
whether it is a pangram or not.
 Design:
        list of  variable :
            s
            i
            used
            total
        list of date type : 
             char
             int
 Expected Output       
             Enter the String:
                  abcdefghijklmnopqrstuvwxyz

             The Entered String is a Pangram String.
*******************************************************************************/

#include<stdio.h>

int main()
{
    char s[100];
    int i,used[26]={0},total=0;
    printf("\n Enter the String:\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            total+=!used[s[i]-'a'];
            used[s[i]-'a']=1;
        }
        else if('A'<=s[i] && s[i]<='Z')
        {
            total+=!used[s[i]-'A'];
            used[s[i]-'A']=1;
        }
    }

    if(total==26)
    {
        printf("\n The Entered String is a Pangram String.");
    }
    else
    {
        printf("\n The Entered String is not a Pangram String.");
    }
    return 0;
}