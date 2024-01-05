// input the multiple strijngs.
// simple concept of 2D chaaracter array --- [how many strings][the size of every string];
// char str[3][100]
// str[0] means the str[0][100]
// str[i] means the str[i][100]

#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the number of strings : ");
    scanf("%d",&n);
    char str[100][30];
    printf("Enter the strings :\n");
    for(int i=0;i<n;i++){
        scanf("%[^\n]",&str[i]);
    }
    for(int j=0;j<n;j++){
        printf("\n%s",str[i]);
    }
    return 0;
}