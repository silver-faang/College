#include<stdio.h>
void chk(int x){
    if (x%100==0)
    {
        if (x%400==0)
         printf("Yes it is a leap year");
        else
         printf("No it is not a leap year");  
    }
    else 
    {
        if (x%4==0)
         printf("Yes it is a leap year");
        else
         printf("No it is not a leap year");  
    }
     
}
int main(){
    int r,v;
    printf("Enter the year to be checked leap :");
    scanf("%d",&r);
    chk(r);
    return 0;

}