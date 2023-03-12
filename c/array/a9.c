#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],c,d;
 for(c=0;c<2;c++)
 {
  for(d=0;d<2;d++)
  {
	printf("Enter the number a[%d][%d]:",c,d);
	scanf("%d",&a[c][d]);
  }
 }
 for(c=0;c<2;c++)
 {
  for(d=0;d<2;d++)
  {
	printf("Enter the number b[%d][%d]:",c,d);
	scanf("%d",&b[c][d]);
  }
 }
 for(c=0;c<2;c++)
  {
   for(d=0;d<2;d++)
   {
	printf(" %d ",a[c][d]);
   }
   for(d=0;d<2;d++)
   {
	printf(" %d ",b[c][d]);
   }
   for(d=0;d<2;d++)
   {
	printf("\t%d+%d=%d",a[c][d],b[c][d],a[c][d]+b[c][d]);
   }
   printf("\n");
  }
}