#include<stdio.h>
int main()
{
 void shyam(int);
 int a;
 printf("Enter the number A : ");
 scanf("%d",&a);

 shyam(a);
}
void shyam(int x)
{
	if(x%2==0)
        {
 	  printf("even");
        }
        else	
        {
 	  printf("odd");
        }
}