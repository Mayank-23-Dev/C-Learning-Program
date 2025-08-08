#include <iostream>
using namespace std;
int main()
{
    int n,c=0,d;
    cout<<"Enter a Number-:";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        if(d!=0)
        {
            c++;
        }
        n=n/10;
    }
    cout<<"Number of Non-Zero Digits-:"<<c;
}