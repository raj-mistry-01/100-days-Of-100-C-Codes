#include<stdio.h>
void main(){
    int n,n1,r=0;
    printf("Enter a number ");
    scanf("%d",&n);
    n1=n;
    while (n!=0)
    {
        r*=10;
        r+=(n%10);
        n/=10;
    }
    if(n1==r){
        printf("%d is a palindrome number ",n1);
    }
    else{
        printf("%d is not a palindronme number",n1);
    }
}