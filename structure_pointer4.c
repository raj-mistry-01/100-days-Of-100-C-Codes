// for a pointer of structure various datatype , it's intializations ans scannig through a pointer.
#include<stdio.h>
// int array type memeber
void main(){
    struct student{
        int marks[5];
    }stu1;
    struct student *ptr=&stu1;
    for(int i=0;i<5;i++){
        printf("Enter your %d subject's marks :",i+1);
        scanf("%d",&ptr->marks[i]);
    }
}