//  Write a program to reverse a given integer.

#include <stdio.h>

int main()
{

    int n;
    printf("Enter integer number : ");
    scanf("%d", &n);

    // reverse
    int reverse = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("The reverse number : %d", reverse);

    return 0;
}