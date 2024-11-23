// Write a program to swap values of two variables with and without using third variable.

#include <stdio.h>
void swapTwoNumberWithVar(int a, int b);

void swapTwoNumberWithOutVar(int a, int b);

void swapWithin(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithout(int *a, int *b)
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

    printf("Before swap Value of a and b is: %d, %d\n",
           a, b);
    swapWithin(&a, &b);
    printf("After swap Value of a and b using temp variable : %d, %d\n",
           a, b);
    // reset
    swapWithin(&a, &b);

    swapWithout(&a, &b);
    printf("After swap Value of a and b without using temp variable : %d, %d\n",
           a, b);
    return 0;
}