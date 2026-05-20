#include<stdio.h>
#include<math.h>
void bi(int a)
{
   int d=0,i=1,v,temp=a;
   printf("The binary equivalent is:");
   while(temp)
   {
      v=temp%2;
      printf("%d",v);
      temp=temp/2;   
   }    
   
}
int main()
{
    int i;
    printf("Enter the decimal number to print binary: ");
    scanf("%d", &i);
    bi(i);
    return 0;
}   