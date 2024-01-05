// fgets(sthe string where data will be stored ,string.length,file pointer)
#include<stdio.h>
#include<string.h>
void main(){
    FILE *fp;
    char str[100];
    fp=fopen("fgets_.txt","r");
    if(fp==NULL){
        printf("Error to open the File\n");
    }
    else{
        while(!feof(fp)){
            fgets(str,100,fp);
            puts(str);
    }
    }
    fclose(fp);
}