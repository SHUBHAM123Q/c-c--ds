#include<stdio.h>
int main()
{
  int a,b;
  a=2;
  while(a<=11)
  {
     if(a%2==0)
     b=1;
     while(b<=5)
     {
       printf("%d ",a);
       b++;
     }
     printf("\n");
     a++;
   }
}