#include<stdio.h>
#include<conio.h>
void main()
{
    int a=9,b=9,c;
    c=a*b;
    if(c%21==0)
    {
         printf("\n a(%d)divisible by 3 and 7",c);
    }
    else
    {
         printf("\n a(%d)notdivisible by 3 and 7",c);
    }
    return 0;
}