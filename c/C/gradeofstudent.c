#include<stdio.h>
#include<conio.h>
int main()
{
    int m,p,c,t,per;
    printf("enter m");
    scanf("%d",&m);
    printf("enter p");
    scanf("%d",&p);
    printf("enter c");
    scanf("%d",&c);
    t=m+p+c;
    per=t/3;
    printf("\n m+p+c:%d",t);
    printf("\n persentage=%d",per);
    if(per>=90 && per<=100)
    {
        printf("\n grad=a");
    }
    else if(per>=70 && per<=80)
    {
        printf("\n grad=b");
    }
     else if(per>=60 && per<=70)
    {
        printf("\n grad=c");
    }
     else if(per>=50 && per<=60)
    {
        printf("\n grad=d");
    }
     else
    {
        printf("\n fail");
    }
    return 0;
}