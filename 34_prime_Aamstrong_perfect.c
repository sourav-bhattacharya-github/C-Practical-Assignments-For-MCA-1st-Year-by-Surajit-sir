//  Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

#include <stdio.h>
#include <math.h>

// Function declarations
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
    int num;
    printf("Enter a integer number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num))
    {
        printf("%d is a Prime number.\n", num);
    }
    else
    {
        printf("%d is not a Prime number.\n", num);
    }

    // Check if the number is an Armstrong number
    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Check if the number is a perfect number
    if (isPerfect(num))
    {
        printf("%d is a Perfect number.\n", num);
    }
    else
    {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num)
{
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    // Find the number of digits
    for (originalNum = num; originalNum != 0; ++n)
    {
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (result == num);
}

// Function to check if a number is a perfect number
int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}
