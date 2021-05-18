#include <stdio.h>
int main()
{
  printf("Enter four numbers :\n");
  float p, q, r, s, mx, mn, v;
  scanf("%f%f%f%f", &p, &q, &r, &s);
  if (p > q)
  {
    mx = p;
    mn = q;
  }
  else
  {
    mx = q;
    mn = p;
  }
  if (r > mx)
  {
    mx = r;
  }
  if (r < mn)
  {
    mn = r;
  }
  if (s > mx)
  {
    mx = s;
  }
  if (s < mn)
  {
    mn = s;
  }
  v=mx-mn;
  printf("The value is %f", v);
  return 0;
}