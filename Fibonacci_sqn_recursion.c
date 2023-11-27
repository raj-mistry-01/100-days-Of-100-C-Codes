#include <stdio.h>
int F(int n)
{
    int i = 0;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return F(n - 1) + F(n - 2);
    }
}
void main()
{
    int n;
    printf("Enter a number for the value of F(n): ");
    scanf("%d", &n);
    int value = F(n);
    printf("F(%d)=%d", n, value);
}
// Values of the F(n) for the n indicates the value of fibonacci series' sum to the n terms.