#include <iostream>
using namespace std;
int square(int x)
{
    int p;
    p=x*x;
    return p;
}
int main()
{
    int m,n;
    cout<<"Enter the Number whose Square do you want-:";
    cin>>n;
    m=square(n);
    cout<<m;
}