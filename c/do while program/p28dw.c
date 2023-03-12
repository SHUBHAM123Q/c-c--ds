#include<stdio.h>
int main()
{
  int a,b,n,d;
  printf("Enter the any number:");
  scanf("%d",&n);
  a=-n;
  do
  {
    b=0;
    d=a;
    if(d<0)
      d=d*-1;
    do
    {
      if(d<=b)
      {
	 printf(" ~");
      }
      else
      {
	 printf(" ");
      }
      b++;
    }
    while(b<=n);
    printf("\n");
    a++;
   }
   while(a<=n);
}