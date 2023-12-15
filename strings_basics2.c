#include <stdio.h>
void main()
{
    char name[] = "Raj";
    printf("My name is ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c", name[i]);
    }
}