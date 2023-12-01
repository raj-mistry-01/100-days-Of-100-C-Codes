#include <stdio.h>
#include <math.h>
void main()
{
    int a, r, n, i = 0, j = 0, term, sumn, sum = 0;
    printf("Enter the first term of Geomatic progression and no.of terms you want in GP respectively :");
    scanf("%d %d", &a, &n);
    printf("Enter the comman ratio of the GP :");
    scanf("%d", &r);
    printf("G.P : ");
    while (i < n)
    {
        term = a * pow(r, i);
        printf("%6d", term);
        i++;
    }
    printf("\nEnter the no.of terms for the sum : \n");
    scanf("%d", &sumn);
    while (j < sumn)
    {
        term = a * pow(r, j);
        sum += term;
        j++;
    }
    printf("The sum of the Gp to the %d terms is %d", sumn, sum);
}