#include <stdio.h>
#include <string.h>
void main()
{
    char name[1000];
    char surname[100], name1[100];
    printf("Enter your full Name : ");
    gets(name);
    sscanf(name, "%s %s", surname, name1);
    printf("Your name is ");
    puts(name1);
    printf("Your surname is ");
    puts(surname);
}
// the sscanf function is used to extract thr string from a string.s