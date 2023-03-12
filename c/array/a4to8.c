#include<stdio.h>
int main()
{
  int a[10],i,b=0,c=0,d=0,e=0;
  for(i=0;i<10;i++)
  {
     printf("enter the number a[%d]",i);
     scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
   if(i%2==0)
    {
	 b=b+a[i];
    }    
  }
  printf("\n odd  position element total  : %d",b);
  for(i=0;i<10;i++)
  {
   if(i%2==1)
    {    
         c=c+a[i];
    }
  }
  printf("\n even position element total  : %d",c);
  for(i=0;i<10;i++)
  {
   if(a[i]%2==1)
   {
         d=d+a[i];
   }
  }
  printf("\n odd  element total           : %d",d);
  for(i=0;i<10;i++)
  {
   if(a[i]%2==0)
   {
         e=e+a[i];
   }
  }
  printf("\n even element total           : %d",e);
  printf("\n all  element total           : %d",b+c);
  
 
}