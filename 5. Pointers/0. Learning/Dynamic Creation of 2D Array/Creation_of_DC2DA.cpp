#include <iostream>
using namespace std;
main()
{
    int r,c;
    cin>>r>>c;
    int *p=new int [r*c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; i++)
        {
            cout<<"Enter Element-:";
            cin>>p[i*c+j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; i++)
        {
            cout<<p[i*c+j];
        }
        cout<<"\n";
    }
}