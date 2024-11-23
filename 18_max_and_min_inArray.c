// Write a Program to find the largest and smallest element in Array.

#include <stdio.h>

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

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("\nThe largest = %d \t smallest = %d \n\n", max, min);
    return 0;
}