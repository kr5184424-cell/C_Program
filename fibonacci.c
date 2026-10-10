/******************************************************************************
   Write a C program to generate the Fibonacci series up to a given number of terms
 Design:
        list of  variable :
             n
             n1
             n2
             n3
             i
        list of date type : 
             int
 Expected Output       
             Enter the limit: 7
             0 1 1 2 3 5 8
*******************************************************************************/
#include<stdio.h>
int main() 
{
    int n,n1=0,n2=1,n3,i;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("\n%d %d",n1,n2);

    for(i=2;i<n;++i){
        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}