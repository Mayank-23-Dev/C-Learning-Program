#include <iostream>
using namespace std;
int main()
{
    int dec=0,n,d,factor=1;
    cout<<"Enter Binary Number-:";
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        dec=dec+d*factor;
        factor=factor*8;
        n=n/10;
    }
    cout<<dec;

}