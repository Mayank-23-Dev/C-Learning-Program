#include <iostream>
using namespace std;
int* sum(int x, int y)
{
    int z=x+y;
    return &z;
}
main()
{
    int a,b;
    cin>>a>>b;
    int* res=sum(a,b);
    cout<<*res;
}