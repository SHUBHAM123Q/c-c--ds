#include <stdio.h>
int main()
{
    int shyam(int);

    int a;
    printf("Enter the number A :");
    scanf("%d", &a);

    shyam(a);
}
int shyam(int x)
{

    printf("squre :%d", x * x);
    printf("\ncube :%d", x * x * x);
}