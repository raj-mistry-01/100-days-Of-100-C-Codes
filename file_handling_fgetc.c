// ch=fgetc(file pointer)
#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp=fopen("fgetc_.txt","r");
    if(fp==NULL){
        printf("Error to oepn th file\n");
    }
    else{
        while(!feof(fp)){
            ch=fgetc(fp);
            printf("%c",ch);
        }
    }
    fclose(fp);
}