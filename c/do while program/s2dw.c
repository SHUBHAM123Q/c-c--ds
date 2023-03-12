#include<stdio.h>
int main()
{
    int a=1,n;
    printf("enter the any number:");
    scanf("%d",&n);
    do
    {
        if(a%2==0)
        {
            printf("\n%d",a*a);
        }
        else
        {
            printf("\n%d",a);
        }
        a++;
    }    
    while(a<=n);
}