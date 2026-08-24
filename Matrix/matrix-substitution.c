#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j;
    int results[100][100],first[100][100],second[100][100];
    printf("Enter the row and column for matrix 1:");
    scanf(" %d %d",&r1,&c1);
    printf("Enter the row and column for matrix 2:");
    scanf(" %d %d",&r2,&c2);

    if(r1==r2 && c1==c2){
        printf("Enter the elements for matrix 1:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("[%d][%d] -",i,j);
                scanf("%d",&first[i][j]);
        }
      }
        printf("Enter the elements for matrix 2:\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                printf("[%d][%d] -",i,j);
                scanf("%d",&second[i][j]);
        }
        }
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                results[i][j] = first[i][j] - second[i][j];
        }
        }
        printf("MATRIX-1 - MATRIX-2 = MATRIX-3\n\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                printf("%d ",results[i][j]);
            }
            printf("\n");
        }





    }















}
