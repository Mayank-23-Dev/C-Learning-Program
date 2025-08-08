#include <iostream>
using namespace std;
int main()
{
    int a,z=1;
    cout<<"Enter the Number till you want to Print-:";
    cin>>a;
    if (a>0)
    {
        for(z=1;z<=a;z++)
        {
            cout<<z<<endl;
        }
    }
    else
    {
        cout<<"Invalid Entry.";
    }
}