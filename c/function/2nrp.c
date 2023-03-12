#include <stdio.h>
int main()
{
    int shyam(int[128], int, int, int);
    int a[128], b, c, n;

    printf("Enter the decimal number :");
    scanf("%d", &n);

    shyam(a, b, c, n);
}
int shyam(int w[128], int x, int y, int z)
{
    for (x = 0; z > 0; x++)
    {
        w[x] = z % 2;
        z = z / 2;
    }
    for (y = x - 1; y >= 0; y--)
    {
        printf("%d", w[y]);
    }
}