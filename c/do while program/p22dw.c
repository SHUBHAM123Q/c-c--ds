#include<stdio.h>
int main()
{
  int a,b;
  a=1;
  do 
  {
    b=1;
    do
    {
      printf("* ");
      b++;
    }
    while(b<=a);
    printf("\n");
    a++;
   }
  while(a<=5);
}