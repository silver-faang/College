#include<stdio.h>
int main()
{
    int n=0,i=0,c=0;
    char a[50];
    printf("Enter the string: ");
    scanf("%s",a);
    for (n=0;a[n]!='\0';n++)
    {
        if (*(a+n)=='a' ||*(a+n)=='e'  ||*(a+n)=='i'  ||*(a+n)=='o'  ||*(a+n)=='u')
        c+=1;
    }
    printf("The string has %d vowels and %d consonants",c,n-c);
    return 0;
}