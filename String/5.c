#include<stdio.h>
void main(){
    int i;
    int freq[256]={0};
    char str[101];

    printf("Enter the sentence: ");
    //fgets(str,101,stdin);
    gets(str);
    for(i=0;str[i] != '\0';i++){
        freq[(unsigned char)str[i]]++;
    }

    for(i=0;i < 256;i++){
        if(freq[i] > 0){
            if(i == ' '){
                printf("\n\n(SPACE) : %d\n\n",freq[i]);
            }
            else{
                printf("%c - %d\n",i,freq[i]);
            }
        }
    }





}
