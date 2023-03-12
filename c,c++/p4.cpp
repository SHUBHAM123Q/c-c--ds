#include<iostream>
using namespace std;
class Mark
{
    int m1,m2,m3,total,r,per;
    char name[10];
    public:
    void data_shubham()
    {
        cout<<"\n enter name";
        cin>>name;
        cout<<"\n roll no:";
        cin>>r;
        cout<<"\n enter m1:";
        cin>>m1;
        cout<<"\n enter m2:";
        cin>>m2;
        cout<<"\n enter m3:";
        cin>>m3;
    }
    void data_total() 
    {
        total=m1+m2+m3;
    }
    void data_per()
    {
        per=total/3;
    }
    void data_print()
    {
        cout<<"--------------------------------";
        cout<<"\n name:"<<name;
        cout<<"\n rollno:"<<r;
        cout<<"\n m1:"<<m1;
        cout<<"\n m2:"<<m2;
        cout<<"\n m3:"<<m3;
        cout<<"\n total:"<<total;
        cout<<"\n per:"<<per;
        if(per>=80 && per<=100)
        {
            cout<<"\n grade A";
            cout<<"\n----------------------------";
        }
        else if(per>=70 && per<=80)
        {
            cout<<"\n grad B";
            cout<<"\n----------------------------";
        }
        else if(per>=60 && per<=70)
        {
            cout<<"\n grad C";
            cout<<"\n----------------------------";
        }
        else if(per>=50 && per<=60)
        {
            cout<<"\n grad D";
            cout<<"\n----------------------------";
        }
        else
        {
            cout<<"\n faill";
            cout<<"\n----------------------------";
        }
    }
};
int main()
{
    int c;
    Mark sr[10];
    for(c=1;c<=2;c++)
    {
        sr[c].data_shubham();
    }
    for(c=1;c<=2;c++)
    {
        sr[c].data_total();
        sr[c].data_per();
        sr[c].data_print();
    }
}