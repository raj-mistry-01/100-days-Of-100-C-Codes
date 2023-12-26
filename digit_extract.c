#include<stdio.h>
int main(){
    int n,dig;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("The digits of the number from right to left :\n");
    while(n!=0){
        dig=n%10;
        n/=10;
        printf("%d \n",dig);
    }
    return 0;
}