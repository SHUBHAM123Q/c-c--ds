#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b,c,d,e;
    printf("\n use the of the unit=");
    scanf("%d",&a);
    
    if(a<100)
    {
        b=a*0.6+50;
        printf("\n your bill amount is=%f",b);
    }
    else if(a>100 && a<300)
    {
        c=a-100;
        b=100*0.6+c*0.8+50;
        printf("\n your bill amount is=%f",b);
    }
    else if(a>300)
    {
        c=a-300;
        b=100*0.6+200*0.8+c*0.9+50;
        printf("\n your bill ampunt is=%f",b);
    }
    if(b>300)
    {
        d=b*0.15;
        e=b+d;
        printf("\n your bill with 15percent charge %f",e);
    }
    return 0;
}