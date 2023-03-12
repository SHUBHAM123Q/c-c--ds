#include<stdio.h>
int main()
{
   int a,b,c=1;
   a=1;
   while(a<=5)
   {
     b=1;
     while(b<=5)
     {
       printf("%d  ",c++);
       b++;
     }
     printf("\n");
     a++;
   }
   
}