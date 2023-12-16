#include <stdio.h>
void main()
{
    int n1, n2;
    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);
    goto sum;
sum:
    printf("sum = %d", n1 + n2);
}
// Goto statement directs the label(here it is sum);mandatory to define a label at the last part of the function , as all statements are included to the label.