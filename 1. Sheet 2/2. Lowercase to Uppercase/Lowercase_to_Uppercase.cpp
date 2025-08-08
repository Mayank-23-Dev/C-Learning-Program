#include <iostream>
using namespace std;
int main()
{
    int c,d;
    char a,b;
    cout<<"Enter a Lowercase Character-:";
    cin>>a;
    c=int(a);
    d=c-32;
    b=char(d);
    cout<<"The uppercase of "<<a<<" is "<<b;
}