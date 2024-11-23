// Write a program to copy one array to another using pointer.

#include <stdio.h>
#define MAX_SIZE 100

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
        scanf("%d", (ptr + i));
    }

    printf("\nPrint Array : ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", *ptr + i);
    }

    // Now copy
    int copy_arr[size];
    int *copy_ptr = copy_arr; // Create copy array ptr

    for (int i = 0; i < size; i++)
    {
        *(copy_ptr + i) = *ptr + i;
    }

    // print copy array

    printf("\nThe Copy Array : ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", *copy_ptr++);
    }
    printf("\n\n");
    return 0;
}