
#include<stdio.h>
int main()
{
    int i, j,n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number array ");
    for (int x=0;x<n;x++)
    scanf("%d",&a[x]);
    i=a[0];
    for (int x=0;x<n;x++)
    {
        if (a[x]>i)
         i=a[x];
    }
    printf("The largest number in the array is:%d",i);
    return 0;
}   