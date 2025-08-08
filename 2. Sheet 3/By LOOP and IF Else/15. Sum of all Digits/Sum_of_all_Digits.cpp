#include <iostream>
using namespace std;
int main()
{
    int a;
    int sum=0;
    cout<<"Enter a Number-:";
    cin>>a;
    int c=a;
    int b;
    for (a;a>0;sum=sum+b)
    {
        b=a%10;
        a=a/10;
    }
    cout<<"The Sum of Digits in Number "<<c<<" is "<<sum;
}