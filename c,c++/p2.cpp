#include<iostream>
using namespace std;
class Mark
{
    int maths,eng,ds,t,p;
    public:
    void set_maths(int a)
    {
        maths=a;
    }
    int get_maths()
    {
        return maths;
    }
    void set_eng(int b)
    {
        eng=b;
    }
    int get_eng()
    {
        return eng;
    }
    void set_ds(int c)
    {
        ds=c;
    }
    int get_ds()
    {
        return ds;
    }
    int total()
    {
        t=maths+eng+ds;
        return t;
    }
    int per()
    {
        p=t/3;
        return p;
    }
    int gread()
    {
        if(p>=10 && p<=50)
        {
            cout<<"\n grad:A";
        }
    }
};
int main()
{
    Mark tiago;
    tiago.set_maths(10);
    cout<<"\n maths:"<<tiago.get_maths();
    tiago.set_eng(20);
    cout<<"\n eng:"<<tiago.get_eng();
    tiago.set_ds(30);
    cout<<"\n ds:"<<tiago.get_ds();
    cout<<"\n total:"<<tiago.total();
    cout<<"\n per:"<<tiago.per();
    tiago.gread();
}