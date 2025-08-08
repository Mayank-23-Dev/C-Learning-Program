#include <iostream>
using namespace std;
int main()
{
    int count=0;
    int a;
    int b;
    cout<<"Enter the Number-:";
    cin>>a;
    b=a;
    for (a;a>=1;count++)
    {
        a=a/10;
        
    }
    cout<<"Total Number of Digits " <<b<<" is "<<count;
}