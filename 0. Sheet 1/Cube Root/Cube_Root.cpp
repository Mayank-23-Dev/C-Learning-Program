#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number=:";
    cin>>n;
    int i,j=0;
    for (i=2;i<=n/2;i++)
    {
        if (n==(i*i*i))
        {
            cout<<i<<" is the Cube Root of "<<n;
            j=1;
            break;
        }
        else
        {
        }      
    }
    if (j!=1)
    {
        cout<<n<<" is not a Perfect Cube.";
    }
    
}