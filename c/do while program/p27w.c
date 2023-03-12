#include<stdio.h>
int main()
{
  int a,b,c=15;
  a=5;
  while(a>=1)
  {
    b=1;
    while(b<=c)
    {
	printf(" ");
	b++;
    }
    b=1;
    while(b<=a)
    {	
	printf(" ~");
        b++;
    }
    c++;
    printf("\n");
    a--;
   }
}