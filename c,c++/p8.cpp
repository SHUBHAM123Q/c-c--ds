#include<iostream>
using namespace std;
class Food
{
    int rat,qty,a,a1,a2,a3,a4,a5=0;
    public:
    Food(int z)
    {
        a5=z;
    }
    ~Food()
    {
        cout<<"\n your total bill:"<<a5;
    }
    void pizz()
    {
        cout<<"\n enter the qty pizz:";
        cin>>qty;
        a=qty*200;
        cout<<"\n pizz:"<<qty<<"="<<a;
        a5=a5+a;
    }
    void vadapav()
    {
        cout<<"\n enter the qty vadapav:";
        cin>>qty;
        a1=qty*15;
        cout<<"\n vadapav:"<<qty<<"="<<a1;
        a5=a5+a1;
    }
    void panipuri()
    {
        cout<<"\n enter the qty panipuri:";
        cin>>qty;
        a2=qty*30;
        cout<<"\n panipuri:"<<qty<<"="<<a2;
        a5=a5+a2;
    }
    void buger()
    {
        cout<<"\n enter the qty buger:";
        cin>>qty;
        a3=qty*120;
        cout<<"\n buger:"<<qty<<"="<<a3;
        a5=a5+a3;
    }
    void bronpizz()
    {
        cout<<"\n enter the qty bronpizz";
        cin>>qty;
        a4=qty*350;
        cout<<"\n bronpizz:"<<qty<<"="<<a4;
        a5=a5+a4;
    }
};
int main()
{
    int ch,d;
    char y[100];
    Food sr(y[100]);
    cout<<"\n enter the name:";
    cin>>y;
    cout<<"\n enter the fonnumber:";
    cin>>d;
    if(d<9)
    {
        cout<<"\n enter the right number:"<<d;
        d+=d;
    }
    cout<<"\n\t\t\t\t\t~~~~~~~welcome~~~~~~~~~";
    cout<<"\n\t\t\t\t\t~ 1.pizz       $=200  ~";
    cout<<"\n\t\t\t\t\t~ 2.vadapav    $=15   ~";
    cout<<"\n\t\t\t\t\t~ 3.panipuri   $=30   ~";
    cout<<"\n\t\t\t\t\t~ 4.buger      $=120  ~";
    cout<<"\n\t\t\t\t\t~ 5.bronpizz   $=350  ~";
    cout<<"\n\t\t\t\t\t~ 0.exit              ~";
    cout<<"\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~";
    while(ch>0)
    {
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n enter the choice:";
        cin>>ch;
        switch (ch)
        {
            case 1:
                sr.pizz();
                break;
            case 2:
                sr.vadapav();
                break;
            case 3:
                sr.panipuri();
                break;
            case 4:
                sr.buger();
                break;
            case 5:
                sr.bronpizz();
                break;
            case 0:
        
                break;
            default:
                cout<<"wrong choice";
                break;
        }
    }
}