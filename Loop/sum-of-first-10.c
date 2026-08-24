#include<stdio.h>
int main(){
    int i,sum,num;
    printf("Enter the total number for sum: ");
    scanf(" %d",&num);
    /*for(i=0;i<=num;i++){
        sum+=i;
    }
    */
    i=0;
    while(i<=num){
        sum += i;
        i++;
    }
    printf("The sum is: %d",sum);
    return 0;


}
