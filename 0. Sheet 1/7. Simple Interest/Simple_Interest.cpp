#include <iostream>
using namespace std;
main()
{
    int p,t,si,a;
    float r;
    cout<<"Enter the Principal Amout-:";
    cin>>p;
    cout<<"Enter the Rate-:";
    cin>>r;
    cout<<"Enter the Time(in Years)-:";
    cin>>t;
    si=p*r*t/100;
    a=p+si;
    cout<<"The Simple Interest Will Be-:"<<si<<endl;
    cout<<"The Final Amount will be-:"<<a<<endl;
}