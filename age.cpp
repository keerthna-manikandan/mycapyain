#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    if(age>=18)
    {
        cout<<"\nYou are eligible to vote";
    }
    else{
        cout<<"\nYou still have "<<18-age<<" more years to  vote.";
    }
}
