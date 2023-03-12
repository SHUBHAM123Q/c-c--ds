#include<stdio.h>
int main()
{
  int a=1,b=1,c=0,d=1;
  do
  {
    printf("\n%d",d);
    b=c;
    c=d;
    d=b+c;
    a++;
   }
   while(a<=10);
}