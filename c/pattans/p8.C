#include<stdio.h>
#include<conio.h>
void main()
{
  char a,b,c=65;
  clrscr();
  for(a=65;a<=69;a++)
  {
	for(b=1;b<=5;b++)
	{
		printf("%c    ",c++);
	}
	printf("\n");
  }
  getch();
}