#include<stdio.h>
#define MAX 101
void main(){
    char str[MAX];
    int i,length=0;
    printf("Enter a string:" );
    gets(str);
    for(i=0;str[i] != '\0';i++){
        length++;
    }
    printf("Length of the string here is: %d",length);


}
