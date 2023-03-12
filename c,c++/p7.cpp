#include <iostream>
using namespace std;
class Bank
{
    int withdrow, deposit, balance=0,d,widtotal=0,deptotal=0;
    public:
    static int witcou,depcou;
    Bank(int c)
    {
        balance=c;
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
        if (deposit > 0)
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
        if (withdrow > balance)
        {
            cout << "you have not sufficient balance";
        }
        cout << "\n your withdrow=" << withdrow;
        balance -= withdrow;
        witcou++;
    }
    void Showbalnce()
    {
        cout << "\n you have=" << balance;
    }
};
int Bank::witcou,Bank::depcou;
int main()
{
    int ch,a,a2,a3;
    cout<<"\n enter Bank1:>";
    cin>>a;
    cout<<"\n enter Bank2:>";
    cin>>a2;
    Bank sr(a),sr2(a2);
    cout<<"\n Enter Bank:";
    cin>>a3;
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
            if(a3==1)
            sr.data_withdrow();
            else
            sr.data_withdrow();
            break;
        case 2:
            if(a3==1)
            sr.data_deposit();
            else
            sr.data_deposit();
            break;
        case 3:
            if(a3==1)
            a3==2;
            if(a3==2)
            a3==1;
            break;
        case 9:
            if(a3==1)
            sr.Showbalnce();
            else
            sr.Showbalnce();
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