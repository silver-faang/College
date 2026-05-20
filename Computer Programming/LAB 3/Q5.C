#include<stdio.h>
int main()
{
    int i, j,n,m;
    printf("Enter the size of Matrices (a x b) ");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    printf("Enter the matrix 1: ");
    for (int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        scanf("%d",&a[x][y]);

    }
    printf("Enter the matrix 2: ");
    for (int x=0;x<n;x++)
    {
        for(int y=0;y<m;y++)
        scanf("%d",&b[x][y]);

    }
    printf("The sum of the matrices is:");
    for (int x=0;x<n;x++)
    {
        printf("\n");
        for (int y=0;y<m;y++)
        {
        a[x][y]+=b[x][y];
        printf ("%d ",a[x][y]);
        }    
    }   
    return 0;
}   