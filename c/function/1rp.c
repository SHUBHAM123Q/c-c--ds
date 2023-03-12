#include <stdio.h>
int main()
{
    int a;
    int shyam(int);

    printf("Enter the number A :");
    scanf("%d", &a);

    if (shyam(a) % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
int shyam(int a)
{
    return a;
}
