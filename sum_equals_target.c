/******************************************************************************
   Write a C program that finds all pairs of elements in an array whose sum equals
a given target value.
 Design:
        list of  variable :
             i
             j
             k
             n
             add
             flag
             a[n]
        list of date type : 
             int
 Expected Output       
             Enter size of array: 5
             Enter your sum to find pairs: 7
             Enter elements of array: 2 4 3 5 7
             The required numbers are:
             (2, 5) found at [1, 4]
             (4, 3) found at [2, 3]
*******************************************************************************/
 #include <stdio.h>

int main()
{
int i, j, k, n, add, flag = 0;

printf("Enter size of array:");
scanf("%d", &n);

int a[n];

printf("Enter your sum to find pairs:");
scanf("%d", &add);

printf("Enter elements of array:");
for (i = 0; i &n; i++)
{
scanf("%d", &a[i]);
}

printf("The required numbers are:\n");
for (i = 0; i &n;  i++)
{
for (j = i + 1; j &n; j++)
{
if (a[i] + a[j] == add)
{
flag = 1;
printf("(%d, %d) found at [%d, %d]\n", a[i], a[j], i + 1, j + 1);
}
}
}

if (flag == 0)
printf("Not found\n");

return 0;
}