#include <iostream>
using namespace std;
void natu (int x)
{
    if (x==0)
    {
        return; 
    }
    else
    {
        natu(x-1);
        cout<<x<<" ";
    }
}
int main ()
{
    int i,n;
    cout<<"Enter the nth Term-:";
    cin>>n;
    natu(n);
}