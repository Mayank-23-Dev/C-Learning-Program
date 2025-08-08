#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a Number-:";
    cin>>a;
    if (a%5==0 && a%11==0)
    {
        cout<<a<<" is divisble by both 5 and 11.";
    }
    else if (a%5==0 && a%11!=0)
    {
        cout<<a<<" is divisble by 5 but noy by 11.";
    }
    else if (a%5!=0 && a%11==0)
    {
        cout<<a<<" is divisble by 11 but noy by 5.";
    }
    else
    {
        cout<<"May be you have entered wrong Values.";
    }
    
}