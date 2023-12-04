#include <stdio.h>
void main()
{
    int r, c, i = 0, j = 0;
    printf("Enter the no.of row and column you want in matrix : ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter the elememt matrix[%d][%d]=", i + 1, j + 1);
            scanf("%d",& matrix[i][j]);
        }
    }
    printf("\n Displaying the matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%2d", matrix[i][j]);
        }
        printf("\n");
    }
}