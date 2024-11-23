// Write a program to add two numbers using pointers.
#include <stdio.h>

int main()
{
    int a, b;
    int *ptr1 = &a, *ptr2 = &b;

    printf("Enter the value of a: ");
    scanf("%d", ptr1);
    printf("Enter the value of b: ");
    scanf("%d", ptr2);

    int sum = *ptr1 + *ptr2;

    printf("The Sum of two nyumber : %d\n", sum);

    return 0;
}
