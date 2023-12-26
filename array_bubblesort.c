#include <stdio.h>
void main()
{
    int i, j;
    int n;
    printf("Enter the no.of values you want to store in array : ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the values in array : \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter array element[%d]=", i);
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                int temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
    printf("Sorted array in ascending order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", ar[i]);
    }
}