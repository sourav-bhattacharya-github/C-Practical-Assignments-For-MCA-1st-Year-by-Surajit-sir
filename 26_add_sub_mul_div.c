// Write a program to add, subtract, multiply and divide two integers using userdefined type function with return type.
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    if (b == 0)
    {
        printf("\n Error  division by zero \n");
    }
    else
    {
        return (float)a / b;
    }
}

int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("%d + %d = %d\n", num1, num2, add(num1, num2));
    printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
    printf("%d / %d = %.2f\n", num1, num2, divide(num1, num2));

    return 0;
}