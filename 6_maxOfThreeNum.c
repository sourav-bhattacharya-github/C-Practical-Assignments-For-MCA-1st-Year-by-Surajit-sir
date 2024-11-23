// Write a program to find the largest of three numbers using ternary operators.
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three integer number : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largestNumber = (num1 > num2) ? 
                        ((num1 > num3) ? num1 : num3) : 
                        ((num2 > num3) ? num2 : num3);

    printf("The Largest Number : %d", largestNumber);
    return 0;
}