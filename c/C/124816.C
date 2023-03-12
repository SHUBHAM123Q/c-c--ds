#include<stdio.h>
#include<conio.h>
void main()
{
  int a,n,c=1;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
	printf("\n%d",c);
	c+=c;
  }
  getch();
}

