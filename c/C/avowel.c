#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("enter an alphabet=");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("%c is avowel=",c);
    }
    else
    {
        printf("%c is consonant=",c);
    }  
    return 0;
}