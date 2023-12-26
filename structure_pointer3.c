// for a pointer of structure various datatype , it's intializations ans scannig through a pointer.
#include<stdio.h>
// char array(string) type memeber
void main(){
    struct person{
        char name[100];
        char surname[100];
    }p1;
    struct person *ptr=&p1;
    // intializing of name 
    ptr->name[100]="Raj";
    printf("Your first char  is=%s",ptr->name);
    // scanning of surname
    printf("\nEnter your surname =");
    scanf("%s",&ptr->surname);
    printf("Entered surname was =%s",ptr->surname);
}