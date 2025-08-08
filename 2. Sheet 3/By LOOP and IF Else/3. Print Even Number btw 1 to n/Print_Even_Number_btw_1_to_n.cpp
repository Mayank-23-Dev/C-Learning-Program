#include <iostream>
using namespace std;
int main()
{
    int n,z;
    cout<<"Enter the Number till you want to print-:";
    cin>>n;
    if (n>0)
    {
        for (z=2;z<=n;z++)
        {
            if (z%2==0)
            {
                cout<<z<<endl;
            }
        }
    }
    else
    {
        cout<<"Invalid Entry";
    }
    
}