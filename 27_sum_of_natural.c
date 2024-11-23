// Write a program to calculate sum of first 20 natural numbers using recursive function

#include <stdio.h>

int main()
{

    int n = 20;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("\nThe Sum of first 20 natural number is : %d \n\n", sum);
    return 0;
}