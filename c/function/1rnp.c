#include<stdio.h>
int main()
{
	int a;
	int shyam();
	a=shyam();
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
int shyam()
{
 	int a;
	printf("Enter the number A :");
	scanf("%d",&a);

	return a;
}