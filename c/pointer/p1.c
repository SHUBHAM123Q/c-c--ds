#include<stdio.h>
int main()
{
    int a=10,b=20,*ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    printf("\n value A: %d",*ptr1);
    printf("\n value B: %d",*ptr2);

}