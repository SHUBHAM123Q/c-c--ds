#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b=0;
 clrscr();

 for(a=2;a<=10;a=a+2)
 {
	b=a+b;
	printf("\n%d",a);
 }
 printf("\ntotal=%d",b);
 getch();
}