#include <stdio.h>
int main()
{
  int p, q, r, s;
  printf("Enter 4 integers:\n");
  scanf("%d %d %d %d", &p, &q, &r, &s);
  if (r > 0 && s > 0)
  {
    if (q > r && s > p && (r + s) > (p + q))
      printf("Correct values ");
    else
      printf(" wrong values");
  }
  else
    printf(" wrong values");
  return 0;
}