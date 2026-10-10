/******************************************************************************
   Write a C program that rearranges an array such that all negative numbers
appear before all positive numbers while preserving the relative order of both
groups.

Design:
         list of  variable 
                    arr, n, ans, pos, neg, i, result
          Output
                    3 -2 1 -5 2 -4

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Returns a new array (caller must free it)
int* rearrangeArray(int arr[], int n) {
    int* ans = (int*)malloc(n * sizeof(int));
    int pos = 0;   // next even index for positives
    int neg = 1;   // next odd index for negatives

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            ans[pos] = arr[i];
            pos += 2;
        } else {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    return ans;
}

int main() {
    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int* result = rearrangeArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");  // Output: 3 -2 1 -5 2 -4

    free(result);
    return 0;
}

