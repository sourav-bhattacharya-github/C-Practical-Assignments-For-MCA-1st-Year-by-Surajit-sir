// Write a program to input and print array elements using pointer.

#include <stdio.h>

#define MAX_SIZE 100 // Array max size 100

int main()
{
    int arr[MAX_SIZE];
    int size;
    printf("Enter size of array (1 - 100): ");
    scanf("%d", &size);

    // input
    int *ptr = arr; // Assiage arr address into ptr

    printf("Enter element of array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    // Now print the array
    ptr = arr;
    printf("\nPrint Array : ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", *ptr);
        ptr++;
    }
    return 0;
}
