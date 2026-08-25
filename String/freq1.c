#include<stdio.h>
void main(){
    char str[101];
    int i;
    char freq[256]={0}; //important
    printf("Enter the word/sentence: ");
    scanf(" %100[^\n]",str);
    for(i=0;str[i] != '\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(i=0;i<256;i++){
        if(freq[i] > 0){
            if(i == ' '){
                printf("\nSpace: %d\n",freq[i]);
            }else{
                printf("\n%c: %d\n",i,freq[i]);
            }
        }
    }








}
