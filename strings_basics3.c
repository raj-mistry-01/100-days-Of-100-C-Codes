#include <stdio.h>
void main()
{
    char str[] = "";
    printf("Enter a string :");
    scanf("%s", str); // Only stores the string the till the whitespace come.It will not store anything after the whitespace
    // Like Entered string is Raj Parth Bro , stores only Raj in str.
}