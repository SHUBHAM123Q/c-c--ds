#include <stdio.h>
int main()
{
    int a;
    int shyam(int);

    printf("Enter the number :");
    scanf("%d", &a);

    printf("squre :%d", shyam(a * a));
    printf("\ncube :%d", shyam(a * a * a));
}
int shyam(int a)
{
    return a;
}