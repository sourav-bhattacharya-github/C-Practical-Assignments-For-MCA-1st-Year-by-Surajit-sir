// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the integer number :");
    scanf("%d", &num);

    int lastNum = num % 10;    // this return last digit
    int firstNum = num / 1000; // this return first digits

    printf("The sum of first and last digits is : %d", firstNum + lastNum);

    return 0;
}