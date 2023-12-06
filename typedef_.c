#include<stdio.h>
void main(){
    typedef int intnew;
    intnew num=5;
    // typedef intnew raj;
    // raj n=5;             // double typedef.
    printf("%d",num);
   // printf("%d",n);
}
// typedef is used to give name to datatype.
// here 'int' datatype is assigned a name as 'intnew' by type defination.
// It is not mandatory to use always new datatype name.E.g you can also declare num as 'int num;'.
// typedef is useful when it comes to long datatype names.
//Concept like double typdef mean giving new name to new datatype also exist.

