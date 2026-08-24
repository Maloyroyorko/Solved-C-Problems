#include<stdio.h>
int main(){
    int r1,c1,i,j,results=0,first[100][100];
    printf("Enter the dimension of matrix:");
    scanf(" %d%d",&r1,&c1);

    printf("Enter elements now: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("[%d][%d] - ",i,j);
            scanf("%d",&first[i][j]);
            if(i==j){
                      results+=first[i][i];
                }
            printf("\n");
        }
    }
    printf("The Diagonal Sum of Matrix is: %d",results);


}
