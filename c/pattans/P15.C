#include<stdio.h>
#include<conio.h>
void main()
{
  char a,b;
  clrscr();
  for(a=65;a<=69;a++)
  {
      for(b=65;b<=a;b++)
      {
	  printf("%c",b);
      }

      printf("\n");
   }
    getch();
}