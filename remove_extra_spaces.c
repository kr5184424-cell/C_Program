/******************************************************************************
  Write a C program that takes a string from the user and replaces every
sequence of multiple consecutive spaces with a single space.

Design:
        list of  variable : str,i,j
        list of date type : int
        
Expected output :
        Enter a String: Hello     World    C
        String        = Hello World C



*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {
            if (str[i] != ' ' || (j > 0 && str[j - 1] != ' ')) {
                str[j] = str[i];
            }
        }
    }
    str[j] = '\0';

    printf("String = %s", str);
    return 0;
}