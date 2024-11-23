// Write a program to find the roots of quadratic equation.
#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c;
    printf("Enter cofficients a, b, c [ax^2 + bx + c = 0] : ");

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) // Convert into Linear Equation
    {
        double root = -c / b;
        printf(" As a = 0\n So it is a Linear Equation \n root =  %.2lf \n\n", root);
        return 0;
    }

    int discriminant = b * b - 4 * a * c;

    if (discriminant == 0)
    {
        double root = -b / (2 * a);
        printf("Both root is same and root = %.2lf \n\n", root);
    }
    else if (discriminant > 0) // real root
    {
        double root1, root2;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("root1 = %.2lf and root2 = %.2lf \n\n", root1, root2);
    }
    else if (discriminant < 0) // Imaginary root
    {
        double realPart, ImagPart;
        realPart = -b / (2 * a);
        ImagPart = sqrt(-discriminant) / (2 * a);

        printf("root1 = (%.2lf + %.2lfi) and root2 = (%.2lf - %.2lfi) \n\n", realPart, ImagPart, realPart, ImagPart);
    }

    return 0;
}
