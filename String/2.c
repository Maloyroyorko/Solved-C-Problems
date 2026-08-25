#include<stdio.h>
#define MAX 101
void main(){
    int i;
    char str[MAX];
    printf("Enter your string: ");
    gets(str);

    for(i=0;str[i] != '\0';i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i]-=32;
        }
    }

    for(i=0;str[i] != '\0';i++){
        printf("%c",str[i]);
    }








}
