#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the Value of a-:";
    cin>>a; 
    cout<<"Enter the Value of b-:";
    cin>>b;
    c=1;
    int d=1;
    while(c<=b)
    {
        d=d*a;
        c++;
    }
    cout<<"The Final Result-:"<<d;
}   