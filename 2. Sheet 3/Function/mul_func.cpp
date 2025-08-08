#include <iostream>
using namespace std;
int mul(int x, int y)
{
    return (x*y);
}
int main()
{
    int a,b;
    cout<<"Enter the First Number-:";
    cin>>a;
    cout<<"Enter the Second Number-:";
    cin>>b;
    cout<<mul(a,b);
}