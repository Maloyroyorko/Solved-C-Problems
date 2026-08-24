#include<stdio.h>
int main(){
    float num,sum=0;
    do{
        printf("Enter the number you wanna add: ");
        scanf(" %f",&num);
        sum += num;
    }
    while(num != 0);
    printf("The sum is: %.2f",sum);

    return 0;
}
