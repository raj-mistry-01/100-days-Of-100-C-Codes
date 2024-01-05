// fputs(string you want to put,file pointer)
#include<stdio.h>
void main(){
    char name[]="Hello Wolrd";
    FILE *fp;
    fp=fopen("fputs_.txt","w");
    fputs(name,fp);
    fclose(fp);
}