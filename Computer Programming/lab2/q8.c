
#include<stdio.h>
int main()
{
    int i, j, num,v,n;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    n=num;
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
            v = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    v= 0;
                    break;
                }
            }
            if(v==1)
            {   
                while (n%i==0)
                {
                n/=i;    
                printf(",%d ", i);
                }
            }
        }
    }
    return 0;
}