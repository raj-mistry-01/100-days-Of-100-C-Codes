#include<stdio.h>
// pointer mean is a refrence to a variable.
// pointer will point to the variable of the structure not the name of the structure.
// now pointer will also have structure datatype;
// the declaratrion pf the pointer -------
            // struct name *ptr=&var_name of structure.
            // accesing property --- ptr->property.
// arrow operator here
struct person{
    int id;
}p1;
void main(){
    struct person *ptr=&p1;
    printf("Enter your id=");
    scanf("%d",&ptr->id);
    printf("The entered id was=%d",ptr->id);
}