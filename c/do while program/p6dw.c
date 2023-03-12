#include<stdio.h>
int main()
{ 
  int a,b;
  a=1;
  do
  {
    
    b=1;
    if(a%2==1)
    do
    {
      printf("%d",a);
      b++;
     }
    while(b<=5);
    printf("\n");
    a++;
    
   }
   while(a<=10);
 }