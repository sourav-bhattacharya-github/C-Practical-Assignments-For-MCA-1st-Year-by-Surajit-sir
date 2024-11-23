// Write a program to copy one string to another using pointer.

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    printf("Enter the String : ");
    gets(str);

    // copy string

    char *ptr = str;
    char copy_str[MAX_SIZE];
    char *copy_ptr = copy_str;

    while (*ptr != '\0')
    {
        *copy_ptr = *ptr;
        ptr++;
        copy_ptr++;
    }
    *copy_ptr = '\0'; // add NULL terminator at the end

    printf("\nThe Copy string is : %s \n", copy_str);

    return 0;
}