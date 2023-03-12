#include<stdio.h>
int main()
{
  char a,b,c=65;
  a=65;
  do 
  {
    b=1;
    do 
    {
      printf("%c  ",c++);
      b++;
      
    }
    while(b<=5);
    printf("\n");
    a++;
   }
   while(a<=69);
}