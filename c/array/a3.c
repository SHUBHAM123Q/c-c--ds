#include<stdio.h>
int main()
{
 int a[10],b[10],i;
 for(i=0;i<5;i++)
 {
	printf("enter the number a[%d]:",i);
	scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {	printf("enter the number b[%d]:",i);
	scanf("%d",&b[i]);
 }
 for(i=0;i<5;i++)
 {
	printf("\n %d+%d=%d",a[i],b[i],a[i]+b[i]);
 }
}