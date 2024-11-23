// Write a program to swap two integers using call by value and call by reference methods of passing arguments to a function.

#include <stdio.h>

void swapByValue(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("this swap by valye : a = %d and b = %d", a, b);
}

void swapByReference(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a, b;
    printf("Enter two integer number : ");
    scanf("%d %d", &a, &b);

    swapByValue(a, b);

    swapByReference(&a, &b);

    printf("\n\nThis is call by Reference a = %d and b = %d\n\n", a, b);
    return 0;
}