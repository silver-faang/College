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
    int n = sizeof(A) / sizeof(A[0]);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != 0) {
            A[k++] = A[i];
        }
    }
    for (int i = k; i < n; i++) {
        A[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}