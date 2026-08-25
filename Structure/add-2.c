#include<stdio.h>
#define STD 3
void main(){
    struct Students{
        char name[101];
        int roll;
        int marks;
    };
    int i,failcount=0;
    struct Students stu[STD];
    for(i=0;i<STD;i++){
        printf("Enter student name: ");
        scanf(" %100[^\n]",stu[i].name);
        printf("\nEnter student roll: ");
        scanf(" %d",&stu[i].roll);
        printf("\nEnter student marks: ");
        scanf(" %d",&stu[i].marks);
    }
    int maxi=0;
    for(i=0;i<STD;i++){
        if(stu[i].marks > stu[maxi].marks){
            maxi=i;
        }
        if(stu[i].marks < 40){
            failcount++;
        }
    }
    printf("\nStudent Who Has Got Highest Mark: \n");
    printf("Name: %s\n",stu[maxi].name);
    printf("Roll: %d\n\n",stu[maxi].roll);

    if(failcount > 0){
        printf("\nStudents Who Have Failed: \n");
        for(i=0;i<STD;i++){
            if(stu[i].marks < 40){
                printf("\n%s",stu[i].name);
            }
        }
    }

}
