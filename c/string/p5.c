#include<stdio.h>
int main()
{
    char s[100];
    int i,l;
    printf("enter string:");
    gets(s);
    l=strlen(s);
    printf("\n length is %d",l);
    for(i=0;i<=l;i++)
    {
        if(i>=2&&i<=4)
        {
           s[i]='*';
        }  
        else
        {
        s[i];
        }
    }    
    printf("\n new string is :%s",s); 
}