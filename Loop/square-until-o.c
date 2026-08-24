#include<stdio.h>
int main(){
    float num,sqr;
    do{
        printf("Enter the number to perform square: ");
        scanf(" %f",&num);
        sqr=num * num;
        printf("Square of %f is: %.2f\n\n",sqr);

    }
    while(num != 0);
    return 0;
}
