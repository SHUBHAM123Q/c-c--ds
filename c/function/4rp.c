#include <stdio.h>
int main()
{
  int a, b = 0, n;
  int shyam(int, int, int);

  printf("Enter the number :");
  scanf("%d", &n);

  for (a = 1; n > 0; a++)
  {
    b = b * 10 + n % 10;
    n = n / 10;
  }
  printf("\n %d", b, shyam);
}
int shyam(int a, int b, int n)
{
  return n;
}