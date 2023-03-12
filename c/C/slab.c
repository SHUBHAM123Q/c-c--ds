#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b,c,d;
    printf("\n enter the income=");
    scanf("%d",&a);
    b=a-2500;
    if(a<=2500)
    {
        printf("you don't have to pay tax");
    }
    else if(a>2500 && a<=5000)
    {
        c=b*0.1;
        printf("you tax for %d will be %2f",a,c);
    }
    else if(a>5000 && a<=10000)
    {
        d=b-2500;
        c=250+d*0.2;
        printf("you tax for %d will be %2f",a,c);
    }
    else if(a>10000)
    {
        d=b-7500;
        c=250+1000+d*0.3;
        printf("you tax for %d will be %2f",a,c);
    }
    return 0;
}