#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b=1,c=0,d=1;
  clrscr();
  for(a=1;a<=10;a++)
  {
	printf("\n%d",d);
	b=c;
	c=d;
	d=b+c;
  }
  getch();
}