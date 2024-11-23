// Write a program to print number in reverse order with a difference of  2.

#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Print numbers in reverse order with a difference of 2
    for (int i = start; i >= end; i -= 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
