#include<stdio.h>
int main()
{
  int a[10][10],c,d,e=0,f=0,g=0;
  for(c=0;c<3;c++)
  {
     for(d=0;d<3;d++)
     {
	printf("Enter the number a[%d][%d]:",c,d);
	scanf("%d",&a[c][d]);
     }
  }
  for(c=0;c<3;c++)
  {
     for(d=0;d<3;d++)
     {
       printf(" %d ",a[c][d]);
     }
     printf("\n");
  }
 for(c=0;c<3;c++)
  {
     for(d=0;d<3;d++)
     {
       if(c==d)
       e=e+a[c][d];
     }
  }
 for(c=0;c<3;c++)
  {
     for(d=0;d<3;d++)
     {
       if(c<d)
       f=f+a[c][d];
     }
  }
  for(c=0;c<3;c++)
  {
     for(d=0;d<3;d++)
     {
       if(c>d)
       g=g+a[c][d];
     }
  }
  printf("\n diagonal total =%d",e);
  printf("\n uper     total =%d",f);
  printf("\n lower    total =%d",g);
  return 0;
}

