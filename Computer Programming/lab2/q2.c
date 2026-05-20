#include<stdio.h>
int main(){
    int r,n;
    printf("Enter the number up to which  cube is to be printed :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        r=i*i*i;
        printf("The cube of %d is %d\n",i,r);
    }
    return 0;

}