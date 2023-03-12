#include<stdio.h>
#include<conio.h>
void main()
{
  int a,c=1,d=1;
  clrscr();
  for(a=1;a<=10;a++)
  {
	d=c*a;
	printf("\n%d",d);
	c+=c;
  }
  getch();
}