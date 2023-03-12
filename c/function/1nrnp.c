#include <stdio.h>
void shyam()
{
	int a;
	printf("Enter the number :");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
}
int main()
{
	shyam();
}