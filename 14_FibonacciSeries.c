// Write a program to generate Fibonacci series.

#include <stdio.h>

int main()
{
    int terms;
    printf("Enter number of terms in Fibonacci series : ");
    scanf("%d", &terms);

    int first = 0;
    int second = 1;
    int next;

    printf("\nThe Fibonacci series :  %d  %d", first, second);
    for (int i = 3; i <= terms; i++)
    {
        next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }

    return 0;
}