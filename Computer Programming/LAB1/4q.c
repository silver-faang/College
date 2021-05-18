#include<stdio.h>
int main(){
    int d,w,y;
    printf("Enter no. of days: ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7; 
    printf("the number of years are %d weeks are %d and days are %d",y,w,d);
    return 0;

}