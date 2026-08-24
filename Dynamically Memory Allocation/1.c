#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    char *str;
    int i,n,count=0,vowels=0;
    printf("Enter the length of the word/snetence: ");
    scanf("%d",&n);
    getchar(); //clearing new lines
    str=(char *)malloc((n+1)*sizeof(char));
    if(str == NULL){
        printf("Mmemory Allocation Failed!\n");
        exit(1);
    }
    printf("Enter the sentence/word: ");
    scanf("%[^\n]s",str);
    printf("\n");

    for(i=0;str[i] != '\0';i++){
        printf("%c",str[i]);
        count++;
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowels++;
        }
    }
    printf("\nLength is: %d",count);
    printf("\nVowels: %d\n",vowels);

    printf("Reversed Order: \n");
    for(i=count-1;i>=0;i--){
        printf("%c",str[i]);
    }
    free(str);
    str=NULL;


}
