#include <iostream>
using namespace std;
int rev_natu(int x)
{
    if (x==1)
    {
        return 1;
    }
    else
    {
        cout<<x<<endl;
        rev_natu(x-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the Nth Term-:";
    cin>>n;
    cout<<rev_natu(n);
}