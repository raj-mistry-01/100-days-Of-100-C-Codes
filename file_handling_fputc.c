// fputc(character you want to put,filepointer;)
#include<stdio.h>
#include<stdlib.h>
void main(){
    char a='B';
    FILE *fp;
    fp=fopen("fputc_.txt","w");
    if(fp==NULL){
        printf("Error to open the file");
    }
    else{
            fputc(a,fp);
    }
    fclose(fp);
}