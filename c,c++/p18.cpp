#include<iostream>
using namespace std;
class Saving 
{
    int withdrow, deposit, balance=0,d,widtotal=0,deptotal=0;
    public:
    static int witcou,depcou;
    Saving()
    {
        balance=1000;
    }
    ~Saving()
    {
        d=balance;
        balance+=balance;
        cout<<"\n destroye"<<d;
        cout<<"\n total deposit:"<<deptotal;
        cout<<"\n you witdrow:"<<Saving::witcou;
        cout<<"\n total witdrow:"<<widtotal;
        cout<<"\n you deposit:"<<Saving::depcou;
    }
    void data_deposit()
    {
        cout << "\n enter the deposit=";
        cin >> deposit;
        if (deposit >= 0)
        {
            cout << "\n your deposit=" << deposit;
            balance += deposit;
            depcou++;
        }
    }
    void data_withdrow()
    {
        cout << "\n enter withdrow amount=";
        cin >> withdrow;
        if (withdrow <= balance)
        {
            cout<<"\n withrow :"<<withdrow;
            balance -= withdrow;
            witcou++;
        }
        else
        {
            cout <<"\nyou have not sufficient balance";
        }
    }
    void Showbalnce()
    {
        cout << "\n you have=" << balance;
    }
};
class Current
{
    int withdrowc, depositc, balance=0,d,widtotal=0,deptotal=0;
    public:
    static int witcouc,depcouc;
    Current()
    {
        balance=1000;
    }
    ~Current()
    {
        d=balance;
        balance+=balance;
        cout<<"\n destroye"<<d;
        cout<<"\n total deposit:"<<deptotal;
        cout<<"\n you witdrow:"<<Current::witcouc;
        cout<<"\n total witdrow:"<<widtotal;
        cout<<"\n you deposit:"<<Current::depcouc;
    }
    void data_depositc()
    {
        cout << "\n enter the deposit=";
        cin >> depositc;
        if (depositc >= 0)
        {
            cout << "\n your deposit=" << depositc;
            balance += depositc;
            depcouc++;
        }
    }
    void data_withdrowc()
    {
        cout << "\n enter withdrow amount=";
        cin >> withdrowc;
        if (withdrowc <= balance)
        {
            cout<<"\n withrow :"<<withdrowc;
            balance -= withdrowc;
            witcouc++;
        }
        else
        {
            cout <<"\nyou have not sufficient balance";
        }
    }
    void Showbalncec()
    {
        cout << "\n you have=" << balance;
    }
};
class Bank : public Saving,public Current
{
    int acono;
   char name[20];
   public:
   void data()
   {
        cout<<"\n Enter the name";
        cin>>name;
        cout<<"\n Enter the account no:";
        cin>>acono;
   }
};
int Saving::witcou,Saving::depcou;
int Current::witcouc,Current::depcouc;
int main()
{
    int ch,a;
    Bank sr;
    sr.data();
    cout<<"\n1.Saving";
    cout<<"\n2.Current";
    cout<<"\n enter the bank type";
    cin>>a;
     while (ch > 0)
    {
        cout << "\n-------------------------";
        cout << "\n1.withdrow";
        cout << "\n2.deposit";
        cout <<  "\n 3.chang bank";
        cout << "\n9.showbalnce";
        cout << "\n0.exit";
        cout << "\n-------------------------";
        cout << "\nenter choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if(a==1)
            sr.data_withdrow();
            else
            sr.data_withdrowc();
            break;
        case 2:
            if(a==1)
            sr.data_deposit();
            else
            sr.data_depositc();
            break;
        case 3:
            if(a==1)
            a=2;
            else
            a=1;
            break;
        case 9:
            if(a==1)
            sr.Showbalnce();
            else
            sr.Showbalncec();
            break;
        case 0:
            cout<<"exit";
            break;
        default:
            cout << "worng choice";
            break;
            cout << "-------------------------";
        }
    }
}