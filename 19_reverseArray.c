// Write a Program to reverse the array elements in C Programming.
#include <stdio.h>

void printArray(int arr[], int size)
{
    printf("\nPrint Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[100], size;
    printf("Enter size of arr (1 to 100) : ");
    scanf("%d", &size);

    printf("Enter element of arry : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before Array reverse ");
    printArray(arr, size);

    // Reverse Array
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("After Array reverse ");
    printArray(arr, size);

    return 0;
}