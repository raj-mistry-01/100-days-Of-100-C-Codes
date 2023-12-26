#include<stdio.h>
#include<stdlib.h>
// ascci A-Z = 65-90;
//       a-z = 97-122
int main(){
    char c;
    printf("Enter a character");
    scanf("%c",&c);
    if(c>=97 && c<=122){
        printf("Lower Case");
    }
    else{
        printf("Upper Case");
    }
    return 0;
}