#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,count=0,max,min,sum=0,even=0,odd=0;
    float avg;
    int *num;
    printf("Enter the length of the number: ");
    scanf(" %d",&n);
    getchar();
    num = (int *)malloc(n*sizeof(int));
    if(num == NULL){
        printf("\nDynamic Memory Allocation Failed!\n");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n");
    max=min=num[0];
    /*
    for(i=0;num[i] != '\0';i++){
    wrong because \0 is only in character arrays
    not inside an integer array
    */
    for(i=0;i<n;i++){
        sum+=num[i];
        count++;
        if(num[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        printf("%d",num[i]);
        if(max < num[i]){
           max=num[i];
        }
        if(min > num[i]){
            min=num[i];
        }
    }
    avg=(float)sum/count;
    printf("\nSum is: %d",sum);
    printf("\nAverage is: %.2f",avg);
    printf("\nEven: %d",even);
    printf("\nODD: %d",odd);
    printf("\nMAX: %d",max);
    printf("\nMIN: %d",min);

    free(num);
    num=NULL;
}
