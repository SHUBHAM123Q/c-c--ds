#include<stdio.h>
#include<conio.h>
int main()
{
    int rat=50,qty=200,amt=10000,dis=500,bill=9500,gst,net;
    gst=bill*0.18;
    net=bill+gst;
    printf("\t rat \t aty  \t amt \t dis \t bill \t gst \t net");
    printf("\n \t%d",rat);
    printf(" \t%d",qty);
    printf(" \t%d",amt);
    printf(" \t%d",dis);
    printf(" \t%d",bill);
    printf(" \t%d",gst);
    printf(" \t%d",net);
    return 0;

}
