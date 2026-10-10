/******************************************************************************
   Write a C program that uses a function to count the frequency of each digit (0–9)
in a given integer.

Design:
         list of  variable 
                    num, freq, i, lastDigit, n
          Output
                    Enter any number: 122345
                    Frequency of each digit in 122345 is:
                    Frequency of 0 = 0
                    Frequency of 1 = 1
                    Frequency of 2 = 2
                    Frequency of 3 = 1
                    Frequency of 4 = 1
                    Frequency of 5 = 1
                    Frequency of 6 = 0
                    Frequency of 7 = 0
                    Frequency of 8 = 0
                    Frequency of 9 = 0
         

*******************************************************************************/
#include <stdio.h>
#define BASE 10


void findFrequency(long long num, int freq[]) {
    int i, lastDigit;
    long long n = num;

    for (i = 0; i < BASE; i++) {
        freq[i] = 0;
    }

    
    if (n == 0) {
        freq[0] = 1;
        return;
    }

    while (n != 0) {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }
}


void printFrequency(long long num, int freq[]) {
    int i;
    printf("Frequency of each digit in %lld is: \n", num);
    for (i = 0; i < BASE; i++) {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
}

int main() {
    long long num;
    int freq[BASE];

    printf("Enter any number: ");
    scanf("%lld", &num);

    findFrequency(num, freq);
    printFrequency(num, freq);

    return 0;
}
