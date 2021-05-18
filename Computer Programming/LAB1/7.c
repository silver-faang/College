#include<stdio.h>
int main(){
    float p,q,r,max,sm;
    printf("Enter three side lengths : ");
    scanf ("%f %f %f", &p,&q,&r);
    
    if (p>q)
     {
         if (r>p)
          {max=r;
           sm=p+q;}
         else
         {
             max=p;
             sm=r+q;
         } 
     }
    else 
    {
        if (r>q)
          {max=r;
           sm=p+q;}
         else
         {
             max=q;
             sm=r+p;
         } 
     
    }
    p=p+q+r;
    if (max<sm)
     printf("Valid values and perimeter is %f",p);
    else 
     printf (" wrong values");

    return 0;

}