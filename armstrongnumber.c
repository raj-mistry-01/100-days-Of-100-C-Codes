// armstong_number - 371 _ 3^3+7^3+1^3=371 ,power = number of digits
#include <stdio.h>
#include <math.h>
void main()
{
    int n, i = 0, dig, sum = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    int n1 = n, n2 = n;
    while (n != 0)
    {
        dig = n % 10;
        n /= 10;
        i++;
    }
    while (n1 != 0)
    {
        dig = n1 % 10;
        sum += (pow(dig, i));
        n1 /= 10;
    }
    if (n2 == sum)
    {
        printf("%d is armstrong number ", n2);
    }
    else
    {
        printf("%d is not a armstrong number", n2);
    }
}
