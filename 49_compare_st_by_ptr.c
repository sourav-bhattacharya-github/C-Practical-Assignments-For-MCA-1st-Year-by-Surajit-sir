// Write a program to compare two strings using pointers.

#include <stdio.h>
#define MAX_SIZE 100

int compareStr(char *str1, char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];

    printf("Enter the First String : ");
    gets(str1);

    printf("Enter the Second String : ");
    gets(str2);

    int ans = compareStr(str1, str2);

    if (ans > 0)
    {
        printf("The first is greater then second string");
    }
    else if (ans < 0)
    {
        printf("The second string is greater then first string");
    }
    else if (ans == 0)
    {
        printf("The both strings are equal");
    }

    return 0;
}