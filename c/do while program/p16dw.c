#include<stdio.h>
int main()
{
  char c=65;
  int a,b;
  a=1;
  do
  {
     
     if(a%2==1)
     {
       b=1;
       do 
       {
            printf("%c  ",c++);
            b++; 
       }
      while(b<=a);
      }
  
     else
     {
      b=1;
      do
       {
            printf("%c  ",c+++32);
            b++;
       } 
           while(b<=a);
         
           
      }     
       printf("\n");
       a++;
   }
  while(a<=5);
}