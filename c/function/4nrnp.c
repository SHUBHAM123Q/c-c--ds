#include <stdio.h>
int shyam()
{
    int a, b = 0, n;

    printf("Enter the number :");
    scanf("%d", &n);

    for (a = 1; n > 0; a++)
    {
        b = b * 10 + n % 10;
        n = n / 10;
    }
    printf("\n %d", b);
}
int main()
{
    shyam();
}