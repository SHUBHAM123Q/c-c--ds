#include<stdio.h>
#include<conio.h>
void main()
{
  int a,n;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
    printf("\n%d",a*a);
  }
  getch();
}