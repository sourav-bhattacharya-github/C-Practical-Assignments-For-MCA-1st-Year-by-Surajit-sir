// Write a program to calculate simple and compound interest.

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, coi;
    // p = principal ; r = rate; t = time; si = simpleInterst

    // Input principal, rate, and time

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time period in years: ");
    scanf("%f", &t);

    // Calculate simple interest
    si = p + (p * r * t) / 100;

    // Cslculate compoundInterest
    coi = p * pow((1 + r / 100), t);

    // Print the result
    printf("Simple Interest = %.2f\n", si);
    printf("Simple Interest = %.2f\n", coi);

    return 0;
}
