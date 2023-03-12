#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,d;
  
  printf("enter the c:");
  scanf("%d",&c);
  for(a=-c;a<=c;a++)
  {
    d=a;
    if(d<0)
    d=d*-1;
    for(b=0;b<=c;b++)
    {
     if(d<=b)
     {
       printf(" *");
     }
      else
      {
	     printf(" ");
	    }
	  }
	 printf("\n");
	}
	 return 0;
}