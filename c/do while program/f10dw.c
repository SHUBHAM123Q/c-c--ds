#include<stdio.h>
int main()
{
  char a;
  a=65;
  do
  {
    printf(" %c-%c",a,a+32);
    a++;
  }
  while(a<=90);
}