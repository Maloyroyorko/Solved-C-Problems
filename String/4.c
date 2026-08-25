#include<stdio.h>
#define MAX 101
void main(){
    int i,length=0;
    char str[MAX],reversed[MAX];
    printf("Enter your string: ");
    gets(str);

    for(i=0;str[i] != '\0';i++){
        length++;
    }
    //printf("%d\n",i);

    for(i=length;i>=0;i--){
        printf("%c",str[i]);
    }



}
