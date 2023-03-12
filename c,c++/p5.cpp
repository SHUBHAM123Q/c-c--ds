#include <iostream>
using namespace std;
class Elc
{
    int a,unit;
    float b, c, d, e;
    char name[10];

    public:
    void data_shubham()
    {
        cout<<"----------------------------------";
        cout<<"\n enter the name";
        cin>>name;
        cout << "\n enter the use unit:";
        cin >> a;
    }
    void data_printf()
    {
        if (a < 100)
        {
            b = a * 0.6 + 50;
            cout << "\n your bill amount is=" << b;
            cout<<"\n----------------------------------";
        }
        else if (a > 100 && a < 300)
        {
            c = a - 100;
            b = 100 * 0.6 + c * 0.8 + 50;
            cout << "\n your bill amount is=" << b;
            cout<<"\n----------------------------------";
        }
        else if (a > 300)
        {
            c = a - 300;
            b = 100 * 0.6 + 200 * 0.8 + c * 0.9 + 50;
            cout << "\n your bill ampunt is=" << b;
        }
        if (b > 300)
        {
            d = b * 0.15;
            e = b + d;
            cout << "\n your bill with 15percent charge:" << e;
            cout<<"\n----------------------------------";
        }
    }
};
int main()
{
    int f;
    Elc sr[10];
    for (f = 1; f <= 5; f++)
    {
        sr[f].data_shubham();
        sr[f].data_printf();
                
    }
}