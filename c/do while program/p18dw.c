#include<stdio.h>
int main()
{
  char a,b,c=65;
  a=65;
  do
  {
    b=65;
    do
    {
      printf("%c  ",c++);
      b++;
    }
   while(b<=a);
   printf("\n");
   a++;
  }
  while(a<=69);
}