#include<stdio.h>
#include<conio.h>
void main()
{
 char a;
 clrscr();
 for(a=65;a<=90;a++)
 {
	printf("%c-%c ",a,a+32);
 }
 getch();
}