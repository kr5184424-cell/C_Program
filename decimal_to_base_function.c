/******************************************************************************
   Write a C program that uses functions to convert a decimal number to any base
between 2 and 16.
 Design:
        list of  variable :
             decimal
             base
             rem
             i
             j
             digits
             result
        list of date type : 
             int
             char
 Expected Output       
             Enter Decimal Number
               25
             Enter Base (2-16)
               2
             Remainder = 1
             Remainder = 0
             Remainder = 0
             Remainder = 1
             Remainder = 1
             Result = 11001
*******************************************************************************/
 #include <stdio.h>

void convert(int decimal, int base)
{
    int rem, i = 0, j;
    char digits[] = "0123456789ABCDEF";
    char result[64];

    if (decimal == 0)
    {
        printf("Result = 0\n");
        return;
    }

    while (decimal != 0)
    {
        rem = decimal % base;
        printf("Remainder = %d\n", rem);
        result[i++] = digits[rem];
        decimal = decimal / base;
    }

    printf("Result = ");
    for (j = i - 1; j >= 0; j--)
        printf("%c", result[j]);
    printf("\n");
}

int main()
{
    int decimal, base;

    printf("Enter Decimal Number\n");
    scanf("%d", &decimal);
    printf("Enter Base (2-16)\n");
    scanf("%d", &base);

    convert(decimal, base);

    return 0;
}

