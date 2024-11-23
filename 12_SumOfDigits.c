//  Write a program to print the sum of digits of a number using for loop.

#include <stdio.h>

int main()
{

    int n;
    printf("Enter integer number : ");
    scanf("%d", &n);

    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("The sum of digits is : %d", sum);

    return 0;
}