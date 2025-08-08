#include <iostream>
using namespace std;
int sum(int *p, int n)
{
    int i,s=0;
    for ( i = 0; i < n; i++)
    {
        s=s+*(p+i);
    }
    return s;
}
int main()
{
    int n,res;
    cout<<"Enter the Size of Array-:";
    cin>>n;
    int a[n];
    int *p=a;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the Element-:";
        cin>>a[i];
    }
    res=sum(p,n);
    cout<<"Total Sum of All Element Of Array-:"<<res;
}