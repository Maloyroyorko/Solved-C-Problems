#include<stdio.h>
struct points{
    int x;
    int y;
};
struct points makepoint(int x,int y){
    struct points p1;
    p1.x=x;
    p1.y=y;
    return p1;
}
void main(){
    struct points p = makepoint(5,10);
    printf("\nx= %d",p.x);
    printf("\ny= %d",p.y);

}
