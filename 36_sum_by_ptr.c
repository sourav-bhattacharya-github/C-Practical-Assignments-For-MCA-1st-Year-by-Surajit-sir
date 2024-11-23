// Write a program to find the sum of all the elements of an array using pointers.

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

    // add by pointer
    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}