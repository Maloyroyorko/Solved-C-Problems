#include<stdio.h>
#include<stdlib.h>
void main(){
    char name[101],code[101],price[101],line[1000];
    FILE *fp;

    printf("Enter product name: ");
    scanf(" %100[^\n]",name);
    printf("Enter product code: ");
    scanf(" %100[^\n]",code);
    printf("Enter product price: ");
    scanf(" %100[^\n]",price);

    fp=fopen("myfile.txt","w");

    if(fp == NULL){
        printf("\nCan't write into file!\n");
        exit(1);
    }

    fputs("\nProduct Information\n",fp);
    fputs("Name: ",fp);
    fputs(name,fp);
    fputs("\n",fp);
    fputs("Code: ",fp);
    fputs(code,fp);
    fputs("\n",fp);
    fputs("Price: ",fp);
    fputs(price,fp);
    fputs("\n",fp);

    fclose(fp);

    fp=fopen("myfile.txt","r");
    printf("\n--- Product Information ---\n");
    while((fgets(line,sizeof(line),fp)) != NULL){
        printf("%s",line);
    }
    fclose(fp);


}
