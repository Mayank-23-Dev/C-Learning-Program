#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number-:";
    cin>>n;
    int t=n;
    int i=2;
    if (n>0)
    {
        while (i<=n-1)
        {
            if (t%i==0)
            {
                break;
            }
            else
            {
                i++;
            }
        }
        if (i>=2 && i<=(n-1))
        {
            cout<<n<<" is not a Prime Number.";
        }
        else
        {
            cout<<n<<" is a Prime Number.";
        }
    }
    else
    {
        cout<<"Pls Enter Correct Values.";
    }
        
    }