#include <stdio.h>
int factn(int n)
{
    if (n != 1)
    {
        return n * factn(n - 1);
    }
    else
    {
        return 1;
    }
}
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int result = factn(n);
    printf("%d's factorial is %d", n,result);
}