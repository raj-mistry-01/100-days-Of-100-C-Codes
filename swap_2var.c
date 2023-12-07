#include <stdio.h>
void main()
{
    int n1, n2;
    printf("Enter the value  n1=");
    scanf("%d", &n1);
    printf("Enter the value of n2=");
    scanf("%d", &n2);
    n2 = n1 - n2;
    n1 = n1 - n2;
    n2 = n1 + n2;
    printf("Swapped values of n1 & n2 :\nn1=%d \nn2=%d ", n1, n2);
}