#include<stdio.h>
int main()
{
  int a,b,c=15;
  a=1;
  while(a<=5)
  {
    b=1;
    while(b<=c)
    {
      printf(" ");
      b++;
    }
    b=1;
    while(b<=a)
    {
      printf("~ ");
      b++;
    }
    c--;
    printf("\n");
    a++;
  }
}
   
   