#include <stdio.h>
void main()
{
    int a, n, d, sum = 0, i = 0;
    printf("Enter the first term of arithemetic progression ,a : ");
    scanf("%d", &a);
    printf("Enter the commman diffeerence of AP ,d : ");
    scanf("%d", &d);
    printf("enter the no.of terms you want in AP ,n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int an = a + (i - 1) * d;
        printf("%d  ", an);
    }
    printf("\nfor the sum,Enter the no.of terms n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int an = a + (i - 1) * d;
        sum+=an;
    } 
    printf("The of AP to the %d terms is %d",n,sum);   
}