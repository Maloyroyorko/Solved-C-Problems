#include<stdio.h>
int main(){
    int num,i;
    printf("Enter the number to check if it is prime or not: ");
    scanf(" %d",&num);
    for(i=2;i<=num;i++){
        if(num % i == 0){
            break;
        }

    }
    if(i == num){
        printf("%d is a prime number!",num);
    }
    else{
        printf("%d is not a prime number!",num);
    }



    return 0;

}
