#include<stdio.h>
#include<conio.h>
void main()
{
  char a,b,c=65;
  clrscr();
  for(a=65;a<=69;a++)
  {
      for(b=65;b<=a;b++)
      {
	  printf("%c",c++);
      }

      printf("\n");
   }
    getch();
}