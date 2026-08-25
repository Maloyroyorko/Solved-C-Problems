#include<stdio.h>
void main(){
    char str[101];
    int i,length=0,ispallindrome=1;
    printf("Enter the word to check: ");
    scanf(" %s",str);
    for(i=0;str[i] != '\0';i++){
        length++;
    }
    for(i=0;i<length/2;i++){
        if(str[i] != str[length-i-1]){
            ispallindrome=0;
            break;
        }

    }
    if(ispallindrome == 1){
        printf("%s is a pallindrome",str);
    }
    else{
        printf("%s is not a pallindrome",str);
    }
}
