#include<iostream>
using namespace std;
class Batsman
{
    int bcode,innings,notout,runs,bavg;
    char bname[20];
    public:
    void readdata()
    {
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n Enter the bcode:";
        cin>>bcode;
        cout<<"\n Enter the batsman name:";
        cin>>bname;
        cout<<"\n Enter the innings:";
        cin>>innings;
        cout<<"\n Enter the notout:";
        cin>>notout;
        cout<<"\n Enter the runs:";
        cin>>runs;
    }
    void calcavg()
    {
        bavg=runs/(innings-notout);
    }
    void displaydata()
    {
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n bcode:"<<bcode;
        cout<<"\n bname:"<<bname;
        cout<<"\n innings:"<<innings;
        cout<<"\n notout:"<<notout;
        cout<<"\n runs:"<<runs;
        cout<<"\n bavg:"<<bavg;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int main()
{
    Batsman sr;
    sr.readdata();
    sr.calcavg();
    sr.displaydata();
}
