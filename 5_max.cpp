// Write a program to input two numbers and display the maximum number.
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compare the two numbers and display the maximum
    if (num1 > num2) {
        printf("%d is the maximum number.\n", num1);
    } else if (num2 > num1) {
        printf("%d is the maximum number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
