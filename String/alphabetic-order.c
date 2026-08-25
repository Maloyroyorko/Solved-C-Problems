#include<stdio.h>
void main(){
    char str[101],temp;
    int i,j;

    printf("Enter the word: ");
    scanf(" %s",str);

    for(i=0;str[i] != '\0';i++){
            for(j=i+1;str[j] != '\0';j++){
                if(str[i] > str[j]){
                    temp=str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }


            }
    }
    //for(i=0;str[i] != '\0';i++){
        printf("\n%s ",str);
    //}




}
