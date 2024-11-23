// Write a Program for deletion of an element from the specified location from Array.

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

    printf("Before Delete ");
    printArray(arr, size);

    int location;
    printf("Enter the location od delete element : ");
    scanf("%d", &location);

    if (location < 0 || location > size)
    {
        printf("\nDeletion is not possible");
    }
    else
    {
        for (int i = location - 1; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("\nAfter Delete ");
        printArray(arr, size);
    }

    return 0;
}