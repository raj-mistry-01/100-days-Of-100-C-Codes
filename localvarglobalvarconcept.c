#include <stdio.h>
int a = 10; // global variable
int display()
{
    printf("Global variable = %d", a); // global variable
    return 0;
}
void main()
{
    int a = 30;
    display();
    printf("\nLocal variable = %d", a); // local variable
    display2();
}
int display2()
{
    printf("\nGlobal variable = %d", a); // global variable
    return 0;
}