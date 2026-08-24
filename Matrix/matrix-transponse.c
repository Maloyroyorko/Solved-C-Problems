
#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,k;
    int results[100][100],first[100][100];
    printf("Enter the row and column for matrix :");
    scanf(" %d %d",&r1,&c1);

        printf("Enter the elements for matrix 1:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("[%d][%d] -",i,j);
                scanf("%d",&first[i][j]);
        }
      }
        printf("\nEntered Matrix:\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("%d ",first[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                results[i][j] = first[j][i];
        }
        }
        printf("Transpose Matrix:\n");
        for(i=0;i<c1;i++){
            for(j=0;j<r1;j++){
                printf("%d ",results[i][j]);
            }
            printf("\n");
        }

        }

