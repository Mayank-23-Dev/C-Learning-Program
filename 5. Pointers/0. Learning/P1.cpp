#include <iostream>
using namespace std;
main()
{
    int a[5],i;
    int *p=NULL;
    p=a;
    for ( i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < 5; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}