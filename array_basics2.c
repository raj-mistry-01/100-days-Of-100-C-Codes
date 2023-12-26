#include <stdio.h>
void main()
{
    char str[] = {'a', 'b', 'c'};
    printf("%d", sizeof(str)); // sizeof=3*1=3 byte
    int n1[] = {1, 2, 3, 4, 5, 6, 7};
    printf("\n%d", sizeof(n1)); // sizeof=7*4=28 byte
    int null[] = {0};           // sizeof=1*4=4
}