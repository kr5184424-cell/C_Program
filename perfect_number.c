/******************************************************************************
   Write a C program that finds all pairs of elements in an array whose sum equals
a given target value.
 Design:
        list of  variable :
             n
             i
             sum
        list of date type : 
             int
 Expected Output       
             Enter the number: 6
             6 is a perfect number
*******************************************************************************/
 #include <stdio.h>

int isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (n == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (isPerfect(n))
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);
    return 0;
}