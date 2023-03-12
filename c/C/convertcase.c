#include<stdio.h>
#include<conio.h>
int main ()
{
    char ab,cd;
    printf("enter char");
    scanf("%c",&ab);
    if(ab>=65 && ab<=90)
    {
        cd=ab+32;
        printf("%c is covert to (%c) lowercase",ab+cd);
    }
    else
    {
        cd=ab-32;
        printf("%c is covert to (%c) uppercase",ab+cd);
    }
    return 0;
}