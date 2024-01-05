#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// writing a structure in a file
struct person{
    int age;
    char name[100];
};
void main(){
    struct person p1,*ptr=&p1;
    printf("Enter your age:");
    scanf("%d",&ptr->age);
    fflush(stdin);
    printf("Enter your name : ");
    scanf("%s",ptr->name);
    FILE *fp;
    fp=fopen("fwrite_.txt","wb");
    if(fp==NULL){
        printf("Error to open file");
    }
    else{
        fwrite(&p1,sizeof(struct person),1,fp);
        printf("\n---------------------------");
        printf("\nData written successfully");
        printf("\n---------------------------");
    }
}=