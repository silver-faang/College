
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number array ");
    for (int x=0;x<n;x++)
    scanf("%d",&a[x]);
    printf("Enter the element position in array to delete :");
    scanf("%d",&i);
    for (int x=i-1;x<n-1;x++)
    a[x]=a[x+1];
    n-=1;
    printf("The elements of array after deletion :");
    for (int x=0;x<n;x++)
    printf("%d ",a[x]);
    return 0;
}   