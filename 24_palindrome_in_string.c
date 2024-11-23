// Write a program to read a string and check for palindrome without using string related function (a string is palindrome if its half is mirror by itself eg: abcdcba).

#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, flag = 1;

    printf("Enter a string: ");
    gets(str); // Read the string

    // Calculate the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check if the string is a palindrome
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
