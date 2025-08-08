#include <iostream>
using namespace std;
main()
{
    int n,d;
    float c,f,e;
    cout<<"Enter the Numerator-:";
    cin>>n;
    cout<<"Enter the Denominator-:";
    cin>>d;
    f=float(n);
    e=float(d);
    c=float(f/e);
    if (d!=0)
    {
        cout<<"The Fraction will look like-:"<<n<<"/"<<d<<endl;
        cout<<"The Final Solution of the Given Fraction will be-:"<<c;
    }
    else 
    {
        cout<<"may be you have entered the Wrong values....Pls Check.";
    }
}