// Write a program to count number of digits in a given integer. 

#include <stdio.h>

int main()
{
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    do
    {
        n /= 10;
        ++count; // Increment the digit count
    } while (n != 0);

    printf("Number of digits: %d\n", count);
    return 0;
}
