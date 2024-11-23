// Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of  two numbers

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter 2 integer number : ");
    scanf("%d %d", &num1, &num2);

    int small = (num1 < num2) ? num1 : num2;

    int gcd, lcm;

    for (int i = 1; i <= small; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    lcm = num1 * num2 / gcd;

    printf("\nGCD = %d \t LCM = %d \n\n", gcd, lcm);

    return 0;
}
