#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    char name[60],sid[30],dept[101],line[1000];
    printf("Enter the student name: ");
    scanf(" %59[^\n]s",&name);
    printf("Enter the student id: ");
    scanf(" %29[^\n]s",&sid);
    printf("Enter the student's department name: ");
    scanf(" %100[^\n]s",&dept);
    fp=fopen("myfile.txt","w");

    if(fp == NULL){
       printf("Can't write inside file!");
        exit(1);
    }

    fputs("Student Information\n",fp);
    fputs("Name: ",fp);
    fputs(name,fp);
    fputs("\n",fp);
    fputs("ID: ",fp);
    fputs(sid,fp);
    fputs("\n",fp);
    fputs("Department: ",fp);
    fputs(dept,fp);
    fputs("\n",fp);
    fclose(fp);

    fp=fopen("myfile.txt","r");

    printf("\n\n--- Student Information ---\n");
    if(fp == NULL){
        printf("Can't read file!");
        exit(1);
    }
    while((fgets(line,sizeof(line),fp)) != NULL){
        printf("%s",line);
    }
    fclose(fp);



}
