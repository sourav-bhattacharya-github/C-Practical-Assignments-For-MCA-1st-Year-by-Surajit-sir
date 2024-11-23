// Write a program to accept a string and count the number of vowels present in this String

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels in the string: %d\n", count);
    return 0;
}
