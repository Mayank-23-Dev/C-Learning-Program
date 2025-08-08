#include <iostream>
using namespace std;
int main()
{
    int i,j,space;
    for (i=1;i<=5;i++)
    {
        for (space=0;space<=5-i; space++)
        {
            cout<<" ";
        }
        for (j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}