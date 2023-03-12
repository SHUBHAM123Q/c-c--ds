#include<stdio.h>
int main()
{
  char a,b;
  a=65;
  do
  {
    b=65;
    do
    {
       printf("%c ",a);
       b++;
    }
     while(b<=69);
     printf("\n");
     a++;
    
  }
     while(a<=69);
    
}