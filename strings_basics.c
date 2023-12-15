#include <string.h>
#include <stdio.h>
void main()
{
    char str[] = {'R', 'a', 'j', '\0'}; // not generate any error.
    printf("My name is ");
    for (int i = 0; i < 3; i++)
    {
        printf("%c", str[i]);
    }
    // char str2[]={'R','a','j'};// not gentrate any error
}