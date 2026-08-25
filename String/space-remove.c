#include<stdio.h>
void main(){
    int i,j=0;
    char results[101],str[101];
    printf("Enter the word/sentence: ");
    scanf(" %100[^\n]",str);

    for(i=0;str[i] != '\0';i++){
        if(str[i] != ' '){
            results[j]=str[i];
            j++;
        }
    }
    results[j]='\0';
    printf("\nWord without space: %s",results);

}
