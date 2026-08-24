#include<stdio.h>
#define ROW 5;
int main(){
    /*
    *
   ***
  *****
 *******
*********



    */
    int space,i,j;
    for(i=1;i<=22;i++){
        for(space=1;space<=22-i;space++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");

    }




    return 0;
}
