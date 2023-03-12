#include<stdio.h>
int main()
{
  float a=0.5,b=0.5;
  while(a<=10)
  {
    printf("\n%2f",b);
    b+=a;
    a++;
  }
}