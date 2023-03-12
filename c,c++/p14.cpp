//multiple level
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
class Base1 : public Base
{
    public:
    Base1()
    {
        cout<<"\n Base1 constructor..";
    }
    ~Base1()
    {
        cout<<"\n Base1 Destructor..";
    }
};
class Derived : public Base,public Base1
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