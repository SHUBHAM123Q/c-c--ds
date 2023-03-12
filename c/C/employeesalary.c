#include<stdio.h>
#include<conio.h>
int main()
{
    int salary;
    float hra,da;
    printf("\n enter the salary:");
    scanf("%d",&salary);
    if(salary<=5000)
    {
        hra=salary*0.08;
        da=salary*0.20;
        printf("\n hra 8=%f",hra);
        printf("\n hra 20=%f",da);    
    }
    else if(salary>=5000 && salary<=10000)
    {
         hra=salary*0.12;
         da=salary*0.30;
         printf("\n hra 12=%f",hra);
         printf("\n hra 30=%f",da);
    }    
    else if(salary>=10000 && salary<=15000)
    {
         hra=salary*0.15;
         da=salary*0.40;
         printf("\n hra 15=%f",hra);
         printf("\n hra 40=%f",da);
    }
    else if(salary>=15000)
    {
         hra=salary*0.20;
         da=salary*0.50;
         printf("\n hra 20=%f",hra);
         printf("\n hra 50=%f",da);  
    }
    return 0;
}