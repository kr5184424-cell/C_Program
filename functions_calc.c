/******************************************************************************
   Write a C program that uses functions to evaluate a simple arithmetic expression
   given two numbers and an operator.
 Design:
        list of  variable :
             first
             second
             a
             b
        list of date type : 
             int
             float
 Expected Output       
             Enter first number: 10
             Enter second number: 3
             13, 7, 30, 3, 3.333333
*******************************************************************************/
 #include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
float rdiv(int a, int b);

int main()
{
    int first;
    printf("Enter first number:");
    scanf("%d", &first);

    int second;
    printf("Enter second number:");
    scanf("%d", &second);

    printf("%d, %d, %d, %d, %f\n",
        add(first, second),
        sub(first, second),
        mul(first, second),
        div(first, second),
        rdiv(first, second)
    );

    return 0;
}

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    return a / b;
}

float rdiv(int a, int b){
    return (float)a / b;
}