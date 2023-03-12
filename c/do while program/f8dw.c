#include<stdio.h>
int main()
{
  char a;
  a='A';
  do
  {
	printf("  %c",a);
        a++;
  }
  while(a<='Z');
}