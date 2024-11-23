// Write a program to swap two arrays using pointers.

#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

// Function declarations
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArrays(int *arr1, int *arr2, int size);

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size;

    // Input array size
    printf("Enter size of arrays: ");
    scanf("%d", &size);

    // Input elements of the first array
    printf("Enter %d elements in first array: ", size);
    inputArray(arr1, size);

    // Input elements of the second array
    printf("Enter %d elements in second array: ", size);
    inputArray(arr2, size);

    // Print arrays before swapping
    printf("\nFirst array before swapping: ");
    printArray(arr1, size);
    printf("\nSecond array before swapping: ");
    printArray(arr2, size);

    // Swap the arrays
    swapArrays(arr1, arr2, size);

    // Print arrays after swapping
    printf("\nFirst array after swapping: ");
    printArray(arr1, size);
    printf("\nSecond array after swapping: ");
    printArray(arr2, size);

    return 0;
}

// Function to input elements in an array
void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Function to print elements of an array
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to swap two arrays using pointers
void swapArrays(int *arr1, int *arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
