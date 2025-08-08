#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the First Number-:";
    cin>>a;
    cout<<"Enter the Second Number-:";
    cin>>b;
    cout<<"Enter the Three Number-:";
    cin>>c;
    if (a>b and a>c)
    {
        cout<<a<<" is the Max Number within these "<<a<<","<<b<<","<<c<<".";
    }
    else if (b>a and b>c)
    {
        cout<<b<<" is the Max Number within these "<<a<<","<<b<<","<<c<<".";
    }
    else if (c>a and c>b)
    {
        cout<<c<<" is the Max Number within these "<<a<<","<<b<<","<<c<<".";
    }
    else
    {
        cout<<"May be you have entered the Wrong Values.";
    }
}