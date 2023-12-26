#include <stdio.h>
int main()
{
    int n, i = 1, factn = 1;
    printf("Enter a number ");
    scanf("%d", &n);
    if (n >= 0)
    {
        while (i <= n)
        {
            factn *= i;
            i++;
        }
        printf("%d's factorial is %d", n, factn);
    }
    else
    {
        printf("%d is a negative number so its factorial is not defined", n);
    }
    return 0;
}