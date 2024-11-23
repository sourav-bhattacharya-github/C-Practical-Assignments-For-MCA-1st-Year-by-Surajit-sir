// Write a program for addition of two matrices of any order in C.

#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &row, &col);

    int m1[row][col], m2[row][col], sum[row][col];

    // Input elements of the first matrix
    printf("Enter elements of the first %d * %d matrix \n", row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elemrnt for matirx[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second %d * %d matrix \n", row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the elemrnt for matirx[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    // add two matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
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
