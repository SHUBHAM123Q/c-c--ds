#include<iostream>
using namespace std;
class Mark
{
    int maths,eng,ds,total,per,i;
    public:
    void inputData()
    {
        cout<<"\n maths marks:";
        cin>>maths;
        cout<<"\n eng marks:";
        cin>>eng;
        cout<<"\n ds marks:";
        cin>>ds;
    }
    void Total()
    {
        total=maths+eng+ds;
    }
    void Per()
    {
        per=total/3;
    }
    void Markprint()
    {
        
        cout<<"\n maths:"<<maths;
        cout<<"\n eng:"<<eng;
        cout<<"\n ds:"<<ds;
        cout<<"\n total:"<<total;
        cout<<"\n per:"<<per;
    }
    void grade()
    {
        if(per>=10 && per<=50)
        {
            cout<<"\n grade A:";
        }
        else
        {
            cout<<"\n faill:";
        }
    }
};
int main()
{
    Mark sr;
    sr.inputData();
    sr.Total();
    sr.Per();
    sr.Markprint();
    sr.grade();

}