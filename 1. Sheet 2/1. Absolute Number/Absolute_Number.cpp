#include <iostream>
using namespace std;
main()
{
    int a;
    cout<<"Enter a Interger-:";
    cin>>a;
    if (a<0)
    {
        a=-1*(a);
        cout<<"The Absolute value of "<<-a<<" will be "<<a;
    }
    else
    {
        cout<<"The Absolute value of "<<a<<" will be "<<a;
    }
    
}