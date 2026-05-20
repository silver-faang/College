#include<stdio.h>
int main()
{
    int n1,m1,n,m;
    printf("Enter the size of Matrices1 (a x b) ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the matrix 1: ");
    for (int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        scanf("%d",&a[x][y]);
    }
    printf("Enter the size of Matrices2 (a x b) ");
    scanf("%d %d",&n1,&m1);
    if (n1!=m )
     printf("Multiplication of Matrices not posssible");
    else
    {  
    int b[n1][m1];
    printf("Enter the matrix 2: ");
    for (int x=0;x<n1;x++)
    {
        for(int y=0;y<m1;y++)
        scanf("%d",&b[x][y]);
    }
    int m[n][m1];
    for (int x=0;x<n;x++)
    {
        for(int y=0;y<m1;y++)
        {
            m[x][y]=0;
            for (int i=0;i<n1;i++ )
            {
                a[x][i]*=b[i][y];
                m[x][y]+=a[x][i];
            }

        }
    }
    printf("The multiplication of two matrices is:\n");
    for (int x=0;x<n;x++)
    {
        printf("\n");
        for(int y=0;y<m1;y++)
         printf("%d",m[x][y]);
    }
    }
    return 0;
}   