// Write a program to search an element in array using pointers.

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size;
    printf("Enter size of array (1 -100) : ");
    scanf("%d", &size);

    int *ptr = arr;
    printf("Enter element of Array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr + i);
    }

    // Now search element
    int target;
    printf("Enter target element : ");
    scanf("%d", &target);

    while (ptr < arr + size)
    {
        if (*ptr == target)
        {
            printf("Element %d found at index %ld.\n", target, ptr - arr);
            break;
        }
        ptr++;
    }

    if (ptr == arr + size)
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}