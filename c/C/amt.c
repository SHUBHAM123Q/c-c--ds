#include<stdio.h>
#include<conio.h>
int main()
{
    int rate,qty,amt,billamt;
    float gst,netbill,dis;
    printf("enter the rate:");
    scanf("%d",&rate);
    printf("enter the qty:");
    scanf("%d",&qty);
    amt=rate*qty;
    dis=amt*0.05;
    billamt=amt-dis;
    gst=billamt*0.18;
    netbill=billamt+gst;
    if(amt>10000)
    {
        dis=amt*0.1;
        billamt=amt-dis;
        gst=billamt*0.28;
        netbill=billamt+gst;
    }
    printf("\n \t rate \t qty \t amt \t dis \t billamt \t gst \t netbill");
    printf("\n \t %d",rate);
    printf("\t %d",qty);
    printf("\t %d",amt);
    printf("\t %d",dis);
    printf("\t %d",billamt);
    printf("\t %d",gst);
    printf("\t %d",netbill);
    if(netbill>25000)
    {
      printf("\n you save %.2f ",dis); 
    }
    return 0;
}
   
