// passing the array as an argumnets
#include <stdio.h>
void main();
int getarray(int [],int);
int getarray(int arr[], int size)
{
    printf("\nEnter the array \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
}
void displarray(int arr[], int size)
{
    printf("\nDisplaying the array\n");
    for (int i = 0; i < size; i++)
        printf("\n%d", arr[i]);
}
void main()
{
    int size;
    printf("Enter the no.of values you want in array :");
    scanf("%d", &size);
    int arr[size];
    getarray(arr, size);
    displarray(arr, size);
}