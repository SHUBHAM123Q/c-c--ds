#include<stdio.h>
int main()
{
  int a=1,b,c=1,d=1;
  do
  {
   d=c*a;
    {
     printf("\n%d",d);
    }
   c+=c;
   a++;
  }
  while(a<=10);
}