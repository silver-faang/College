#include<stdio.h>
int main(){
    int r,n;
    printf("Enter the number whose table is to be printed :");
    scanf("%d",&n);
    for (int i=1;i<=10;i++)
    {
        r=i*n;
        printf("%d x %d = %d\n",n,i,r);
    }
    return 0;

}