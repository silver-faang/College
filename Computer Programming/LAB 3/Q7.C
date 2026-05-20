#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array : ");
    for (int x=0;x<n;x++)
    scanf("%d",&a[x]);
    printf("Accessing the array using pointer :");
    for (int x=0;x<n;x++)
    printf("%d ",*a+x);
    return 0;
}   