#include <stdio.h>
int shyam()
{
    int a[128], i, j, n;

    printf("Enter the decimal number :");
    scanf("%d", &n);

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
}
int main()
{
    shyam();
}
