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
    while (a>0)
    {
        b=a%10;
        a=a/10;
        sum=sum+b;
    }
    cout<<"The Sum of Digits in Number "<<c<<" is "<<sum;
}