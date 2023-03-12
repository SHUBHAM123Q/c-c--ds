#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\n enter the nambera=");
    scanf("%d",&a);
    printf("\n enter the namberb=");
    scanf("%d",&b);
    printf("\n enter the namberc=");
    scanf("%d",&c);
    if(a>=b&a>=c)
    {
        printf("\n %d is the largest number",a);
    }
    if(b>=a & b>=c)
    {
            printf("\n %d is the largest number",b);
    }
    if(c>=a & c>=b)
    {
        printf("\n %d is the largest number",c);
    }
    return 0;
}