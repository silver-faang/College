#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of String: ");
    scanf("%d",&n);
    char a[n];
    printf("Enter the string : ");
    for (int x=0;x<n;x++)
    scanf("%s",&a[x]);
    char *p=a;
    printf("Accessing the array using pointer in reverse order :");
    for (int x=n-1;x>=0;x--)
    printf("%s ",*p+x);
    return 0;
}   