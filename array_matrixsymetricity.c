#include <stdio.h>
void main()
{
    int r, c, i = 0, j = 0, flag = 0;
    printf("Enter the no.of row and column you want in matrix : ");
    scanf("%d %d", &r, &c);
    if (r == c)
    {
        int matrix[r][c];
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("Enter the elememt matrix[%d][%d]=", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (matrix[i][j] == matrix[j][i])
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            printf("Entered matrix is symetric");
        }
        else
        {
            printf("Entered matrix is non symetric");
        }
    }
    else
    {
        printf("Matrix is not square matrix so there is no symetricity");
    }
}
