#include<stdio.h>
int fibo(int n){
    if(n <= 1) return n;
    return fibo(n-1)+fibo(n-2);
}
void main(){
    //nth term of fibonacci series
    int num;
    printf("Enter the nth term of fibonacci series: ");
    scanf(" %d",&num);
    printf("\n\nThe %d th term of fibonacci series is: %d",num,fibo(num));
}
