#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=3;i++){
        printf("i=%d,",i);
        for(j=1;j<=4;j++){
            if(j == 2 || j ==3)
                continue;
            printf(" j=%d",j);
        }
        printf("\n");

    }


}
