#include<stdio.h>
int main()
{
  char ab=0;
  do
  {
    if(ab%4==0)
    {
      printf("\n%c",ab+65);
    }
    else
    {
      printf("\n%c",ab+32+65);
    }
    ab++; 
    ab++;
   }
   while(ab<=20);
} 