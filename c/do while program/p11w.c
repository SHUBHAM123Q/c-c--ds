#include<stdio.h>
int main()
{
  char a,b;
  a=65;
  while(a<=69)
  {
    b=65;
    while(b<=a)
    {
      printf("%c",b);
      b++;
    }
    printf("\n");
    a++;
   }
}