#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b=0,c=0,d=0;
 clrscr();
 for(a=1;a<=10;a++)
 {
	b=a+b;
	if(a%2==1)
	{
		c=a+c;
		printf("%d",a);
	}
	if(a%2==0)
	{
		d=a+d;
		printf("%d",a);
	}
 }
 printf("\n%d",b);
 printf("\n  %d",c);
 printf("\n    %d",d);
 getch();
}
