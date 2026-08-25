#include<stdio.h>
struct points{
        int x;
        int y;
};
struct points makepoint(int x,int y){
    struct points points1;
    points1.x=x;
    points1.y=y;
    return points1;
}
void main(){
    //Pointer structure recieve
    //normal structure recieve
    //structure sending
    struct points p1 = makepoint(6,10);
    printf("x= %d\n",p1.x);
    printf("y= %d\n",p1.y);




}
