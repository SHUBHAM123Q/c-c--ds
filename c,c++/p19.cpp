#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void dispalay()
    {n
        cout<<"\n Base called:";
    }                   
};
class Dreived : public Base
{
    public:
    void display()
    {
        cout<<"\nDrevied called:";
    }
};
int main()
{
    Base *p,b;
    Dreived d;
    p=&d;
    p->dispalay();
}