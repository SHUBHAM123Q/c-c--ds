#include<stdio.h>
int main()
{
  char c=65;
  int a,b;
  a=1;
  while(a<=5)
  {
    b=1;
    while(b<=a)
    { 
       if(b%2==0)
       {
          printf("%c  ",c++);
          
       }
       else
       {
   	  printf("%c  ",c+++32);
        
       } 
     b++;
    }
     printf("\n");
     a++;
  }
}