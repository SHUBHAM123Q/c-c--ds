#include<stdio.h>
#include<conio.h>
void main()
{
  float a,n,c=1;
  clrscr();
  printf("Enter the number:");
  scanf("%f",&n);
  for(a=1;a<=n;a++)
  {
	c=a*c;
  }
  printf("Factorial of %.1f   =	%.1f	",n,c);
  getch();
}