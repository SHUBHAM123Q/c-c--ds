#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c=15;
 clrscr();
 for(a=1;a<=5;a++)
 {
	for(b=1;b<=c;b++)
	{
		printf(" ");
	}
	for(b=1;b<=a;b++)
	{
		printf("* ");
	}
	c--;
	printf("\n");
 }
 getch();
}