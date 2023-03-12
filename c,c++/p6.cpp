#include <iostream>
using namespace std;
class Bank
{
    int withdrow, deposit, balance = 0;
    public:
    void shubham()
    {
        cout << "\n enter the deposit=";
        cin >> deposit;
        if (deposit > 0)
        {
            cout << "\n your deposit=" << deposit;
            balance += deposit;
        }
    }
    // Bank()
    // {
    //     cout<<"\n defuulf constructor";
    // }
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
    }
    void Showbalnce()
    {
        cout << "\n you have=" << balance;
    }
    void exit()
    {
        cout << "\n exit:";
    }
};
int main()
{
    int ch;
    Bank sr;
    while (ch > 0)
    {
        cout << "\n-------------------------";
        cout << "\n1.withdrow";
        cout << "\n2.deposit";
        cout << "\n9.showbalnce";
        cout << "\n0.exit";
        cout << "\n-------------------------";
        cout << "\nenter choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            sr.data_withdrow();
            break;
        case 2:
            sr.shubham();
            break;
        case 9:
            sr.Showbalnce();
            break;
        case 0:
            sr.exit();
            break;
        default:
            cout << "worng choice";
            break;
            cout << "-------------------------";
        }
    }
}