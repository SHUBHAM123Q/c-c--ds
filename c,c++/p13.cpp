//single inheritance
#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"\n Base constructor..";
    }
    ~Base()
    {
        cout<<"\n Base Destructor..";
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"\n Derived constructor..";
    }
    ~Derived()
    {
        cout<<"\n Derived Destructor..";
    }
};
int main()
{
    Derived obj;
}