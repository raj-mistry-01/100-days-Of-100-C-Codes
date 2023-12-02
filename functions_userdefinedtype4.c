// with argument, with return
#include<stdio.h>
int a=5,b=7;
int add(a,b){
    printf("a=5 and b=7\n");
    return a+b;
}
void main(){
    int sum=add(a,b);
    printf("Sum=%d",sum);
}