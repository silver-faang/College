#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of String: ");
    scanf("%d",&n);
    char* a;
    printf("Enter the string : ");
    scanf("%s",&a);
    printf("Accessing the array using pointer in reverse order :");
    for (int x=n-1;x>=0;x--)
    printf("%s ",*a+x);
    return 0;
}   