//hierarchical inheritance
#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"\n Base construtor...";
    }
    ~Base()
    {
        cout<<"\n Base destrutor...";
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
class Derived2 : public Base
{
    public:
    Derived2()
    {
        cout<<"\n Derived constructor..";
    }
    ~Derived2()
    {
        cout<<"\n Derived Destructor..";
    }
};
int main()
{
    Derived obj1;
    Derived2 obj2;
}