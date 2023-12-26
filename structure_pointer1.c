// for a pointer of structure various datatype , it's intializations ans scannig through a pointer.
#include<stdio.h>
// int type memeber
void main(){
    struct person{
        int id;
        int salary;
    }p1;
    struct person *ptr=&p1
    // intializing of id 
    ptr->id=10;
    printf("Ypur id is=%d",ptr->id);
    // scanning of salary
    printf("\nEnter your salary =");
    scanf("%d",&ptr->salary);
    printf("Entered salary was=%d",ptr->salary);
}