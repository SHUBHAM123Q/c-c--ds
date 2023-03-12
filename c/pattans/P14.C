#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c=5;
  clrscr();
  for(a=1;a<=5;a++)
  {
      for(b=1;b<=a;b++)
      {
	  printf("%d",c--);
      }

      printf("\n");
      c=5;
   }
    getch();
}