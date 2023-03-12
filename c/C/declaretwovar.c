#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("insert value x=");
    scanf("%d",&x);
    printf("insert value y=");
    scanf("%d",&y);
    if(x<2000 || 3000>x)
    {
        printf("x=%d\n",x);
    }
    if(100<y && y<500)
    {
        printf("y=%d\n",y);
    }
    return 0;
}