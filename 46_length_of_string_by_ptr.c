// Write a program to find length of string using pointers.

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    printf("Enter the String : ");
    gets(str);

    char *ptr = str;
    int length = 0;

    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    printf("\nThe length of string is : %d \n\n", length);

    return 0;
}