#include<stdio.h>
int main(){
    int i,num,factorial=1; //as by default,0 is the value of this variable: factorial
    printf("Enter the number to find out factorial: ");
    scanf(" %d",&num);
    for(i=1;i<=num;i++){
        factorial *= i;
    }
    printf("The factorial for %d is: %d",num,factorial);
    return 0;
}
