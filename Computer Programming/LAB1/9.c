#include<stdio.h>
int main(){
    float a,b=50.0,c=1.0,s=0.0;

    for (a=0;a<=2;a++)
     {   
         if (a>0)
          c*=2;
         s+=(1+2*a)/c;
     }
    printf("The sum of the numbers is %f",s);
    return 0;

}