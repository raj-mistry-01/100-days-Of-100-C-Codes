#include<stdio.h>
void main(){
    int n,dig,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    int n1=n;
    while(n!=0){
        dig=n%10;
        sum+=dig;
        n/=10;
    }
    printf("The sum of digits of number %d is %d",n1,sum);
}