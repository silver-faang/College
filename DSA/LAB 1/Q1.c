#include <stdio.h>
int main() {
  int n,mxp,mnp;
  double arr[100],mx,mn;
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  mx=arr[0],mn=arr[0];
  for (int i = 1; i < n; ++i) {
    if (mx < arr[i]) {
      mx = arr[i];
      mxp=i;
    }
    if (mn> arr[i]) {
      mn = arr[i];
      mnp=i;
    }
  }
  arr[mnp]=mx;
  arr[mxp]=mn;
  return 0;
}