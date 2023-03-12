#include<stdio.h>
int main ()
{
  int a,b,c=1;
  a=1;
  do
  {
    b=1;
    do
    {
      printf("%d  ",c++);
      b++;
    }
    while(b<=a);
    printf("\n");
    a++;
  }
  while(a<=5);
}