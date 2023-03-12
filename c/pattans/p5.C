#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  for(a=1;a<=10;a++)
  {
	if(a%2==0)
	for(b=1;b<=5;b++)
	{
		printf("%d   ",a);
	}
	printf("\n");
  }
  getch();
}