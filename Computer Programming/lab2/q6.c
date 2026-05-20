#include<stdio.h>
int fct(int x){
    int ans=1;
    for(int i=1;i<=x;i++)
    ans*=i;
    return ans;
}
int main(){
    int r,v;
    printf("Enter the number whose factorial is to be printed :");
    scanf("%d",&r);
    v=fct(r);
    printf(" The factorial of %d is : %d ",r,v);
    return 0;

}