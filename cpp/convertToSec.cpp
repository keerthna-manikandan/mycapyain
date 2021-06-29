#include<iostream>
#include<iomanip>
using namespace std;

class time{
    private:
    int total_sec;
    int h,m,s;
    public:
    void convert()
    {
        total_sec = h*3600+m*60+s;

    }
    void display()
    {
        convert();
        cout<<"The Time is = "<<setw(2)<< setfill('0')<<h<<":"<<setw(2)<< setfill('0')<<m<<":"<<setw(2)<< setfill('0')<<s;
        cout<<"\nTime in total seconds: "<<total_sec;
    }
    void get_time()
    {
        cout<<"Enter Time: ";
        cout<<"\nHours? ";cin>>h;
        cout<<"Minutes? ";cin>>m;
        cout<<"Seconds? ";cin>>s;
        display();
    }

}t;
int main()
{

    t.get_time();
    return 0;
}
