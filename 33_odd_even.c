// Write a C program to check whether a number is even or odd using functions.

#include <stdio.h>
#include <stdbool.h>

bool isEven(int num);

int main()
{
    int n;
    printf("\n\nEnter a integer number : ");
    scanf("%d", &n);

    if (isEven(n))
    {
        printf("\nThis number %d is even\n\n", n);
    }
    else
    {
        printf("\nThis number %d is odd\n\n", n);
    }

    return 0;
}

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}