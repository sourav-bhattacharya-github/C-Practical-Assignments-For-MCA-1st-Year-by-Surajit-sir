// Write a C program to find maximum and minimum between two numbers using functions

#include <stdio.h>

// Function declarations
int max(int num1, int num2);
int min(int num1, int num2);

int main()
{
    int num1, num2, maximum, minimum;

    // Input two numbers from user
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    // Call functions to find maximum and minimum
    maximum = max(num1, num2);
    minimum = min(num1, num2);

    // Print the results
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);

    return 0;
}

// Function to find maximum between two numbers
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

// Function to find minimum between two numbers
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
