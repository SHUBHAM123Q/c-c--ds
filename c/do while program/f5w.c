#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter the number:");
  scanf("%d",&n);
  i=-n;
  while(i<=n)
  {
	printf(" %d",i);
        i++;
  }
}