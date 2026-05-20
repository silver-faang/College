#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n); 
    int A[n];
    for (int i=0;i<n;i++){
    printf("Enter the %d element of array",i);
    scanf("%d",&A[i]);
    }
    for (int i = 1; i < n-1; i++)
    {
        A[i] = A[i+1]*A[i-1];
    }
    return 0;
}
