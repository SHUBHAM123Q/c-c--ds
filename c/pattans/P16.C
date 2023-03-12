#include<stdio.h>
#include<conio.h>
void main()
{
  char c=65;
  int a,b;
  clrscr();
  for(a=1;a<=5;a++)
  {
      if(a%2==1)
      {
      for(b=1;b<=a;b++)
      {
	  printf("%c",c++);
      }
     }
     else
     {
     for(b=1;b<=a;b++)
     {
      printf("%c",c+++32);
   }
   }
     printf("\n");


     }
    getch();
}