#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements to be entered: ";
    cin>>n;

    int ar[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int *ptr = &ar[0];
    cout<<"You Entered:";
    for(int i=0;i<n;i++)
    {
        cout<<*ptr<<"\n";
        ptr++;
    }
}
