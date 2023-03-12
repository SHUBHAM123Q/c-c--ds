#include <stdio.h>
int main()
{
  int a, b = 0, n;
  int shyam();
  a, b = 0, n = shyam();

  for (a = 1; n > 0; a++)
  {
    b = b * 10 + n % 10;
    n = n / 10;
  }
  printf("\n %d", b);
}
int shyam()
{
  int a, b, n;

  printf("Enter the number :");
  scanf("%d", &n);

  return n;
}