#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    int n;
    cout<<"Enter a Number-:";
    cin>>n;
    cout<<fact(n);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}


