//  Write a program to read an integer number and print the reverse of that number using recursion.

#include <stdio.h>

int reverseNumber(int num, int rev)
{
    if (num == 0)
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main()
{
    int num;
    printf("Enter integer number : ");
    scanf("%d", &num);

    int reverse = reverseNumber(num, 0);

    printf("\nThe reverse of %d is : %d \n\n", num, reverse);
    return 0;
}