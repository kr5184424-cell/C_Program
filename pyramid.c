/******************************************************************************
   Write a C program to print a pyramid of stars for a given number n.

Design:
         list of  variable 
                    rows, i, j, sps
          Output
          
                            *
                          * * *
                        * * * * *
                      * * * * * * *
                    * * * * * * * * *

*******************************************************************************/

#include <stdio.h>

void printPyramid(int rows) {
    int i, j, sps;

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (sps = 1; sps <= rows - i; sps++) {
            printf("  ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }
}

int main() {
    int rows = 5;
    printPyramid(rows);
    return 0;
}
