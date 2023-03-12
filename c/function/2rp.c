#include <stdio.h>
int main()
{
    int a[128], b, n;
    int shyam(int, int, int);

    printf("Enter the decimal number : ");
    scanf("%d", &n);

    for (b = 0; n > 0; b++)
    {
        a[b] = n % 2;
        n = n / 2;
    }
    for (b = b - 1; b >= 0; b--)
    {
        printf("%d", a[b], shyam);
    }
}
int shyam(int a, int b, int n)
{
    return n;
}
