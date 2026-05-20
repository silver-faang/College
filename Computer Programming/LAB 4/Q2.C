#include<stdio.h>
#include<math.h>
int* fzn()
{
   static int d=10;
   return (&d);
}
int main()
{
    int* p ;
    p=fzn();
    printf("The address: %p\n",p);
    printf("the value of above address:%d\n",*p);
    return 0;
}   