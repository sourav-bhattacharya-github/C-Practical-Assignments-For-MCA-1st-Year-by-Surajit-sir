// Write a Program to multiply two 3 X 3 Matrices.

#include <stdio.h>
int main()
{
    int row = 3, col = 3;

    int m1[row][col], m2[row][col], multipl[row][col];

    // Input elements of the first matrix
    printf("Enter elements of the first 3 * 3 matrix \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elemrnt for matirx[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second 3 * 3 matrix \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elemrnt for matirx[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }


    // multiple two matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            multipl[i][j] = 0; // set zero
            for (int k = 0; k < row; k++)
            {
                multipl[i][j] += m1[i][k] + m2[k][j];
            }
        }
    }

    // print multipl matrix
    printf("\n\nThe multipl of two matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d ", multipl[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}
// 1 2 3 4 5 6 7 8 9
