#include<stdio.h>
int main()
{
  int a,b;
  a=5;
  while(a>=1)
  {
    b=5;
    while(b>=a)
    {
      printf("%d",b);
      b--;
    }
    printf("\n");
    a--;
  }
}