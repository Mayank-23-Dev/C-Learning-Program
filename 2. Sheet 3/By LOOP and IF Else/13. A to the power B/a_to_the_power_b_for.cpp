#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the Value of a-:";
    cin>>a; 
    cout<<"Enter the Value of b-:";
    cin>>b;
    int d=1;
    for(c=1;c<=b;c++)
    {
        d=d*a;
    }
    cout<<"The Final Result-:"<<d;
}   