#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  clrscr();
  for(a=65;a<=90;a++)
  {
	if(a%2==1)
	{
		printf("\n%c",a);
	}
  }
  getch();
}
