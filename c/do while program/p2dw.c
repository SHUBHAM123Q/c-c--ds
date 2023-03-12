#include<stdio.h>
int main()
{
  int a,b;
  a=5;
  do
  {
    b=5;
    do
    {
       printf("%d ",a);
       b--;
    }
     while(b>=1);
     printf("\n");
     a--;
    
  }
     while(a>=1);
    
 
}