#include<stdio.h>
int main()
{
  int a,b,c=15;
  a=1;
  do
  {
    b=1;
    do
    {
      printf(" ");
      b++;
    }
    while(b<=c);
    b=1;
    do
    {
      printf("~ ");
      b++;
    }
    while(b<=a);
    printf("\n");
    a++;
  }
  while(a<=5);
}
   