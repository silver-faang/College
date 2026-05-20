#include<stdio.h>
#include<math.h>
void dc(int a)
{
   int d=0,i=1,v,temp=a;
   while(temp)
   {
      v=temp%10;
      temp=temp/10;   
      d+=i*v;
      i=i*2;
   }    
   printf("The decimal equivalent is: %d",d);
}
int main()
{
    int i;
    printf("Enter the binary number to print decimal: ");
    scanf("%d", &i);
    dc(i);
    return 0;
}   