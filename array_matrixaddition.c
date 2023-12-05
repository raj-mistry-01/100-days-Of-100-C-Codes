#include <stdio.h>
void main()
{
    int i,j,r1, c1, r2, c2;
    printf("Enter the first matrix(m1)' no .of row and column respectively : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the second matrix(m2)' no .of row and column respectively : ");
    scanf("%d %d", &r2, &c2);
    if (r1 == r2 && c1 == c2)
    {
        int m1[r1][c1], m2[r1][c1];
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("Enter the elememt m1[%d][%d]=", i + 1, j + 1);
                scanf("%d", &m1[i][j]);
                printf("Enter the elememt m2[%d][%d]=", i + 1, j + 1);
                scanf("%d", &m2[i][j]);
            }
        }
        printf("\n m1+m2= \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%2d",m1[i][j]+m2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix addition is not possible");
    }
}