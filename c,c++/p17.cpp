#include<iostream>
using namespace std;
class Bank
{
    int withdrow, deposit, balance=0,d,widtotal=0,deptotal=0;
    public:
    static int witcou,depcou;
    Bank()
    {
        balance=1000;
    }
    ~Bank()
    {
        d=balance;
        balance+=balance;
        cout<<"\n destroye"<<d;
        cout<<"\n total deposit:"<<deptotal;
        cout<<"\n you witdrow:"<<Bank::witcou;
        cout<<"\n total witdrow:"<<widtotal;
        cout<<"\n you deposit:"<<Bank::depcou;
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
class Person : public Bank
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
int Bank::witcou,Bank::depcou;
int main()
{
    int ch,a;
    Person sr;
    sr.data();
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
        switch(ch)
        {
        case 1:
            sr.data_withdrow();
            break;
        case 2:
            sr.data_deposit();
            break;
        case 9:
            sr.Showbalnce();
            break;
        }
    }
}