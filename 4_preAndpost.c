// Write a program to illustrate the use of unary prefix and postfix increment and decrement operators. 
#include <stdio.h>

int main() {
    int a = 5, b = 5;
    int prefixIncrement, postfixIncrement;
    int prefixDecrement, postfixDecrement;

    // Prefix increment
    prefixIncrement = ++a; // a is incremented first, then assigned to prefixIncrement
    printf("Prefix Increment: a = %d, prefixIncrement = %d\n", a, prefixIncrement);

    // Postfix increment
    postfixIncrement = b++; // b is assigned to postfixIncrement, then incremented
    printf("Postfix Increment: b = %d, postfixIncrement = %d\n", b, postfixIncrement);

    // Resetting values for decrement demonstration
    a = 5;
    b = 5;

    // Prefix decrement
    prefixDecrement = --a; // a is decremented first, then assigned to prefixDecrement
    printf("Prefix Decrement: a = %d, prefixDecrement = %d\n", a, prefixDecrement);

    // Postfix decrement
    postfixDecrement = b--; // b is assigned to postfixDecrement, then decremented
    printf("Postfix Decrement: b = %d, postfixDecrement = %d\n", b, postfixDecrement);

    return 0;
}
