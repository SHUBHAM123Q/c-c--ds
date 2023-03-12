#include<stdio.h>
#include<conio.h>
void main()
{
  char c=65;
  int a,b;
  clrscr();
  for(a=1;a<=5;a++)
  {
      for(b=1;b<=a;b++)
      {
      if(b%2==0)
      {
	  printf("%c",c++);
      }
      else
      {
      printf("%c",c+++32);
   }
   }
   printf("\n");
   }
    getch();
}