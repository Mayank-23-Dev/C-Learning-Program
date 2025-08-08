#include <iostream>
using namespace std;
int main()
{
    int a;
    float b,c;
    cout<<"What do you want to Enter"<<endl<<"Type 1 for Fahrenheit"<<endl<<"Type 2 for Calsius"<<endl;
    cin>>a;
    switch (a)
    {
    default:
        cout<<"Pls enter 1 or 2.";
        break;
    case 1:
        cout<<"Enter the Value-:";
        cin>>b;
        c=5*(b-32)/9;
        cout<<b<<" Fahrenheit"<<"="<<c<<" Celsius";
        break;
    case 2:
        cout<<"Enter the Value-:";
        cin>>b;
        c=(b*9)/5+32;
        cout<<b<<" Celsius"<<"="<<c<<" Fahrenheit";
        break;
    
    }
    
}