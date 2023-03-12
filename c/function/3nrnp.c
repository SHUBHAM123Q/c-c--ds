#include <stdio.h>
int shyam()
{
    int a;
    printf("Enter the number A :");
    scanf("%d", &a);

    printf("squre :%d", a * a);
    printf("\ncube :%d", a * a * a);
}
int main()
{
    shyam();
}