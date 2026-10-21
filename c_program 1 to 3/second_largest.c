/******************************************************************************

Write a function in C that takes an array of integers and its size, and returns the
second largest element.
 
 Design:
        list of  variable : arr[] , n,largest,second,i,temp
        list of date type : int
        Description : Stores the integer entered by the user
  Expected output
          Second largest = 15 
  Actual output:        
          Second largest = 15 
*******************************************************************************/
#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int second = arr[1];

    if (second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    printf("Second largest = %d", secondLargest(arr, n));

    return 0;
}