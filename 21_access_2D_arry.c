// Write a Program to access an element in 2-D Array. 

#include <stdio.h>

int main() {
    // Define a 2-D array
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row, col;

    // Prompt the user to enter the row and column indices
    printf("Enter the row index (0-2): ");
    scanf("%d", &row);
    printf("Enter the column index (0-2): ");
    scanf("%d", &col);

    // Access and print the element at the specified indices
    if (row >= 0 && row < 3 && col >= 0 && col < 3) {
        printf("Element at array[%d][%d] is %d\n", row, col, array[row][col]);
    } else {
        printf("Invalid indices!\n");
    }

    return 0;
}
