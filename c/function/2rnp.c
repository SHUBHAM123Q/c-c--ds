#include <stdio.h>
int main()
{
    int a[128], b, c, n;
    int shyam();
    a[128] = shyam();

    for (b = 0; n > 0; b++)
    {
        a[b] = n % 2;
        n = n / 2;
    }
    for (c = b - 1; c >= 0; c--)
    {
        printf("%d", a[c]);
    }
}
int shyam()
{
    int a[128], b, c, n;
    printf("Enter the decimal number :");
    scanf("%d", &n);

    return n;
}