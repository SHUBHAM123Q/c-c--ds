#include<iostream>
using namespace std;
class Car
{
    int price,speker,cemero;
    public:
    void set_price(int a)
    {
        price =a;
    }
    int get_price()
    {
        return price;
    }
    void set_speker(int b)
    {
        speker =b;
    }
    int get_speker()
    {
        return speker;
    }
    void set_cemero(int c)
    {
        cemero =c;
    }
    int get_cemero()
    {
        return cemero;
    }
};
int main()
{
    Car tiago;
    tiago.set_price(10);
    cout<<"\n price :"<<tiago.get_price();
    tiago.set_speker(20);
    cout<<"\n speker :"<<tiago.get_speker();
    tiago.set_cemero(30);
    cout<<"\n cemero :"<<tiago.get_cemero();
    cout<<"\n total:"<<tiago.get_price()+tiago.get_speker()+tiago.get_cemero();
}