
#include<stdio.h>
void pr(int a, int b)
{
    for (int i=a;i<=b;i++)
    {
        int c=0;
        for (int x=2;x<=i/2;x++)
        {
            if (i%x==0)
             c+=1;
        }
        if (c==0)
         printf ("%d ",i);
            
    }
}
int main()
{
    int i, j;
    printf("Enter the two number to print Prime numbers between them: ");
    scanf("%d %d", &i,&j);
    pr(i,j);
    return 0;
}   