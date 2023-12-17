#include <stdio.h>
void main()
{
    int n, i = 2, flag = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d is special number", n);
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
            }
            i++;
        }
        if (flag == 0)
        {
            printf("%d is a prime",n);
        }
        else
        {
            printf("%d not a prime",n);
        }
    }
}