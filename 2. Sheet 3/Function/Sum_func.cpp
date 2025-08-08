#include <iostream>
using namespace std;
int sum(int x, int y)
{
    return (x+y);
}
int main()
{
    int a,b;
    cout<<"Enter the First Number-:";
    cin>>a;
    cout<<"Enter the Second Number-:";
    cin>>b;
    cout<<sum(a,b);
}