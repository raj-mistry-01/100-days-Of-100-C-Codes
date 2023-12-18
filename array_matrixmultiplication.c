#include <stdio.h>
void main()
{
    int i, j, k, r1, r2, c1, c2;
    printf("Enter the first matrix(m1)' no .of row and column respectively : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the second matrix(m2)' no .of row and column respectively : ");
    scanf("%d %d", &r2, &c2);
    if (c1 == r2)
    {
        int m1[r1][c1], m2[r1][c1], z[r1][c2];
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter the elememt m1[%d][%d]=", i + 1, j + 1);
                scanf("%d", &m1[i][j]);
            }
        }
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("Enter the elememt m2[%d][%d]=", i + 1, j + 1);
                scanf("%d", &m2[i][j]);
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                z[i][j] = 0;
                for (k = 0; k < r2; k++)
                {
                    z[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        printf("\n m1*m2=\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%4d", z[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not possible");
    }
}