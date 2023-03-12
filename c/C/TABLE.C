#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter the number:");
 scanf("%d",&b);
 for(a=1;a<=10;a++)
 {
	printf("\n%d*%d=%d",b,a,a*b);
 }
 getch();
}