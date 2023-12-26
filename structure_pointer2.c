// for a pointer of structure various datatype , it's intializations ans scannig through a pointer.
#include<stdio.h>
// char type memeber
void main(){
    struct person{
        char a;
        char b;
    }p1;
    struct person *ptr=&p1;
    // intializing of a 
    ptr->a='A';
    printf("Your first char  is=%c",ptr->a);
    // scanning of b
    printf("\nEnter your salary =");
    scanf("%c",&ptr->b);
    printf("Entered char was =%c",ptr->b);
}