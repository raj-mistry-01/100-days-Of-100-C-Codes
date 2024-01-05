// fscanf(file pointer,format specifier of the data,variable name that will store read data from another file);
#include<stdio.h>
void main(){
    FILE *fp;
    int n;
    char c;
    fp=fopen("fscanf_.txt","r");
    if(fp==NULL){
        printf("Error to open the file");
    }
    else{
        fscanf(fp,"%d %c",&n,&c);
        printf("The scanned number and characater from fscanf_.txt is %d and %c",n,c);
    }
    fclose(fp);
}