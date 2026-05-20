#include <stdio.h>
int main()
{
    char text[50]; 
    int i;
    int count= 0;
    printf("Enter any string: ");
    scanf("%s",&text);
    for(i=0; text[i]!='\0'; i++)
        count++;
    printf("\nLength of '%s' = %d", text, count);
    return 0;
}