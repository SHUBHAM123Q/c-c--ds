#include<stdio.h>
int main()
{
  int a=1,b,c=1;
  printf("enter the number:");
  scanf("%d",&b);
  while(a<=b)
  {
    printf("\n%d",c);
    c+=c;
    a++;
  }
}