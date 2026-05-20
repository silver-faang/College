#include<stdio.h>
int sqr(int x){
    return x*x;
}
int main(){
    int r,v;
    printf("Enter the number whose square is to be printed :");
    scanf("%d",&r);
    v=sqr(r);
    printf(" The square of %d is : %d ",r,v);
    return 0;

}