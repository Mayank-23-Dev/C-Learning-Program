#include <iostream>
using namespace std;
int main()
{
    int n,z;
    cout<<"Enter the number till you want to get Odd Numbers-:";
    cin>>n;
    if (n>0)
    {
        for (z=1;z<=n;z++)
        {
            if (z%2!=0)
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