#include <stdio.h>
#include <string.h>
void main()
{
    char name[] = "";
    printf("Enter your name : ");
    gets(name); // solution scanf for string ,It stores the string includong whitespace and all things.
    printf("Your name is ");
    puts(name);
}