#include <iostream>
using namespace std;
int main()
{
    int n,f,l;
    cout<<"Enter a Number-:";
    cin>>n;
    l=n%10;
    f=n;
    while(f>=10)
    {
        f=f/10;
    }
    cout<<"Sum of First and Last Digit-:"<<f+l;
}