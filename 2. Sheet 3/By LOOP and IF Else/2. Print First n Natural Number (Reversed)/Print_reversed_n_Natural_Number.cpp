#include <iostream>
using namespace std;
int main()
{
    int a,z=1;
    cout<<"Enter the Number from where you want to Count-:";
    cin>>a;
    if (a>0)
    {
        for (a;a>0;a--)
        {
            cout<<a<<endl;
        }
        
    }
    else
    {
        cout<<"Invalid Entry";
    }
    
}