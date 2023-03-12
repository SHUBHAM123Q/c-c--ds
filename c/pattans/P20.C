#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c=0;
  clrscr();
  for(a=1;a<=5;a++)
  {
      for(b=1;b<=a;b++)
      {
      c++;
      if(c%2==1)
      {
      c=1;
      }
      else
      {
      c=0;
      }
	  printf("%d",c);
      }

      printf("\n");
   }
    getch();
}