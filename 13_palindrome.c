// Write a program to check whether a number is Palindrome or not.

#include <stdio.h>

int main()
{

    int n;
    printf("Enter integer number : ");
    scanf("%d", &n);

    int num = n; // store for check
    // reverse
    int reverse = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if (num == reverse)
        printf("The number %d is a Palindrome ", num);
    else
        printf("The number %d is not a Palindrome ", num);

    return 0;
}