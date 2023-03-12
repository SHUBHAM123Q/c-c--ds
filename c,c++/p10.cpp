#include<iostream>
using namespace std;
class Student
{
    int admno;
    char sname[20];
    float eng,math,science,total;
    public:
    void Takedata()
    {
        cout<<"\n Enter the admission no:";
        cin>>admno;
        cout<<"\n Enter the student name:";
        cin>>sname;
        cout<<"\n Enter the eng mark:";
        cin>>eng;
        cout<<"\n Enter the math mark:";
        cin>>math;
        cout<<"\n Enter the scince mark:";
        cin>>science;
    }
    void ctotal()
    {
        total=eng+math+science;
        cout<<"\n subject total:"<<total;
    }
    void showdata()
    {
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n admno:"<<admno;
        cout<<"\n sname:"<<sname;
        cout<<"\n eng:"<<eng;
        cout<<"\n math:"<<math;
        cout<<"\n science:"<<science;
        cout<<"\n subject total:"<<total;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int main()
{
    Student sr;
    sr.Takedata();
    sr.ctotal();
    sr.showdata();
}