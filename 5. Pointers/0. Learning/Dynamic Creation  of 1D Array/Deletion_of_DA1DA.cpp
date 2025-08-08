#include <iostream>
using namespace std;
main()
{
    int *p=new int [5];
    for ( int i = 0; i < 5; i++)
    {
        cout<<"Enter Element-:";
        cin>>p[i];
    }
    for ( int i = 0; i < 5; i++)
    {
        cout<<p[i]<<"\t";
    }
    cout<<endl;
    delete[] p;
    for ( int i = 0; i < 5; i++)
    {
        cout<<p[i]<<"\t";
    }
}