#include <stdio.h>
int main()
{
  int a[10][10], c, d;
  for (c = 0; c < 3; c++)
  {
    for (d = 0; d < 3; d++)
    {
      printf("Enter the number a[%d][%d]:", c, d);
      scanf("%d", &a[c][d]);
    }
  }
  for (c = 0; c < 3; c++)
  {
    for (d = 0; d < 3; d++)
    {
      printf(" %d ", a[d][c]);
    }
    printf("\n");
  }
}