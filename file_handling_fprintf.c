// fprintf is used to write into file.
// fprintf(file pointer," Normal printf statements");
#include<stdio.h>
#include<string.h>
void main(){
    FILE *fp;
    int age;
    char name[100];
    printf("Enter your name and age :");
    scanf("%s %d",name,&age);
    fp=fopen("fprintf_.txt","w");
    if(fp==NULL){
        printf("Unable to open file\n");
    }
    else{
            fprintf(fp,"%s %d",name,age);
            fclose(fp);
        }
}