#include<stdio.h>
int main()
{
 int a[10],b[10],c;
 for(c=0;c<5;c++)
 {
	printf("\n enter the number a[%d]:",c);
	scanf("%d",&a[c]);
 }
 for(c=0;c<5;c++)
 {
	printf("\n enter the number b[%d]:",c);
	scanf("%d",&b[c]);
 }
 for(c=0;c<5;c++)
 {
	printf("\n a[%d]:%d",c,a[c]);
 }
 for(c=0;c<5;c++)
 {
	printf("\n\tb[%d]:%d",c,b[c]);
 }
}