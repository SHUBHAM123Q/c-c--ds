#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter the number:");
  scanf("%d",&n);
  i=n;
  do
  {
    printf("%d",i);
    i--;
  }
  while(i>=1);
}