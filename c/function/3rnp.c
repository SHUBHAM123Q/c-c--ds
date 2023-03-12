#include <stdio.h>
int main()
{
    int a;
    int shyam();
    a = shyam();

    printf("squre :%d", a * a);
    printf("\ncube :%d", a * a * a);
}
int shyam()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);

    return a;
}