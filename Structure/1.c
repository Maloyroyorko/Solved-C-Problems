#include<stdio.h>
#define STD 2
void main(){
    struct Student_Info{
        char name[101],addr[101];
        float cgpa;
    };
    float avg,sum;

    struct Student_Info StdList[STD];

    for(int i=0;i<STD;i++){
        printf("Enter Student Name: ");
        scanf(" %100[^\n]",&StdList[i].name);

        printf("\nEnter Student Address: ");
        scanf(" %100[^\n]",&StdList[i].addr);

        printf("\nEnter Student CGPA: ");
        scanf(" %f",&StdList[i].cgpa);
    }
    for(int i=0;i<STD;i++){
        sum += StdList[i].cgpa;
    }

    avg=sum/STD;

    printf("\nThe Average CGPA is: %.2f",avg);



}
