//  Write a program to reverse an array using pointers.

#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int size;
    printf("Enter size of Array : ");
    scanf("%d", &size);

    int *start = arr;
    printf("Enter element of Array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", start + i);
    }

    // Now Reverse Array

    int *end = arr + size - 1;
    int temp;
    while (start <= end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }

    printf("\nAfter swap Print Array : ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}