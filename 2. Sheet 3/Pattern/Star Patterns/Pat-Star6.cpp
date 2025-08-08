#include <iostream>
using namespace std;
int main()
{
    int i,j,space;
    for (i=1;i<=5;i++)
    {
        for (space=0;space<=i-1; space++)
        {
            cout<<" ";
        }
        for (j=1;j<=(11-2*i);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}