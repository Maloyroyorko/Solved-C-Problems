#include<stdio.h>
void main(){
    int words=0,inwords,i;
    char str[101];
    printf("Enter the word/sentence: ");
    scanf(" %100[^\n]",str);

    for(i=0;str[i] != '\0';i++){
        if(str[i] != ' '){
            if(inwords == 0){
                words++;
                inwords=1;
            }

        }
        else{
            inwords=0;
        }



    }
    printf("\nTotal Words: %d",words);



}
