#include<stdio.h>
int main()
{
  float a=1,n,c=1;
  printf("Enter the value:");
  scanf("%f",&n);
  while(a<=n)
  {
	c=a*c;
	a++;
  }
	printf("%.1f=%.1f",n,c);
	
}