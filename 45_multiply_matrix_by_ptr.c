// Write a program to multiply two 2 X 2 matrix using pointers.



#include <stdio.h>
#define ROW 2
#define COL 2

int main()
{
    int row = ROW;
    int col = COL;

    int m1[row][col], m2[row][col], multiply[row][col];

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

    // Multiply two matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            (*(*(multiply + i) + j)) = 0;
            for (int k = 0; k < row; k++)
            {
                (*(*(multiply + i) + j)) += (*(*(m1 + i) + k)) * (*(*(m2 + k) + j));
            }
        }
    }

    // print multiply matrix
    printf("\n\nThe multiply of two matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\t %d ", multiply[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}

