#include<stdio.h>
int main(){
    float s=0.0;
    int a=1,b=50;
    for (a=1;a<=b;a+=1)
     {
         s+=(float)(1/((float)a));
     }
    printf("The sum of the numbers is %f",s);
    return 0;

}