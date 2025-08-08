#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the First Number-:";
    cin>>a;
    cout<<"Enter the Second Number-:";
    cin>>b;
    c=(a%b);
    if (c==0)
    {
        cout<<"First Number is Divisible by Second Number";
    }
    else if (c!=0)
    {
        cout<<"First Number is not Divisible by Second Number";
    }
    else
    {
        cout<<"Pls Reenter the Numbers and Check whether they are number.";
    }
}
