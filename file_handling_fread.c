#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// reading a structure in a file
struct person{
    int age;
    char name[100];
};
void main(){
    struct person p1;
    FILE *fp=fopen("fwrite_.txt","rb");
    if(fp==NULL){
        printf("Error to open the file");
    }
    else{
        fread(&p1,sizeof(struct person),1,fp);
        printf("The age of the person is %d",p1.age);
        printf("\nThe name of the person is %s",p1.name);
        printf("\n---------------------------");
        printf("\nData read successfully");
        printf("\n---------------------------");
    }
    fclose(fp);
}