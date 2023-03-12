#include<stdio.h>
#include<conio.h>
void main()
{
    int a=4,b=4,c,d;
    c=a*b;
    d=a+b;
    if(c%d==0)
    {
         printf("\n is divisible by it's addition",c);
    }
    else
    {
         printf("\n %d is not divisible by it's addition",c);
    }
    return 0;
}