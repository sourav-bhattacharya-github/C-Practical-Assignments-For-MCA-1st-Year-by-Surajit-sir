// Write a program to add two 2 X 2 matrix using pointers.

#include <stdio.h>
#define ROW 2
#define COL 2

//** Why this not work
// void addMatrices(int **m1, int **m2, int **sum, int row, int col)
// {

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             (*(*(sum + i) + j)) = (*(*(m1 + i) + j)) + (*(*(m2 + i) + j));
//         }
//     }
// }

int main()
{
    int row = ROW;
    int col = COL;

    int m1[row][col], m2[row][col], sum[row][col];

    // Input elements of the first matrix
    printf("Enter elements of the first 2 * 2 matrix \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elemrnt for matirx[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &(*(*(m1 + i) + j)));
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second 2 * 2 matrix \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elemrnt for matirx[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &(*(*(m2 + i) + j)));
        }
    }

    // add two matrix
    //* addMatrices(m1, m2, sum, row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            (*(*(sum + i) + j)) = (*(*(m1 + i) + j)) + (*(*(m2 + i) + j));
        }
    }

    // print sum matrix
    printf("\n\nThe sum of two matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\t %d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}
