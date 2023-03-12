#include <stdio.h>
int main()
{
   int a, n;
   printf("Enter the number:");
   scanf("%d", &n);
   for (a = 1; a <= n; a++)
   {
      if (a % 2 == 0)
      {
         printf("\n%d", a * a);
      }
      else
      {
         printf("\n%d", a);
      }
   }
}