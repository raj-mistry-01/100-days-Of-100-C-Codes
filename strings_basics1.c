#include <stdio.h>
void main()
{
    char str[2] = {'r'}; // it will not assign all 2 charcater as 'r' ,where an array does .
    for (int i = 0; i < 2; i++)
    {
        printf("%c", str[i]);
    }
}