#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number-:";
    cin>>a;
    if (a%3==0 && a%7==0)
    {
        cout<<a<<" is divisble by both 3 and 7.";
    }
    else if (a%3==0 && a%7!=0)
    {
        cout<<a<<" is divisble by 3 but noy by 7.";
    }
    else if (a%3!=0 && a%7==0)
    {
        cout<<a<<" is divisble by 7 but noy by 3.";
    }
    else
    {
        cout<<"May be you have entered wrong Values.";
    }
    
}