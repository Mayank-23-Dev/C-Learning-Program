#include <iostream>
using namespace std;
int max(int *p,int n)
{
    int mx=*p,i;
    for ( i = 0; i < n; i++)
    {
        if (*(p+i)>mx)
        {
            mx=*(p+i);
        }
    }
    return mx;
}
int main()
{
    int n,i,res;
    cout<<"Enter the Size of Array-:";
    cin>>n;
    int a[n];
    int *p=a;
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter the Element-:";
        cin>>a[i];
    }
    res=max(p,n);
    cout<<"The Maximum Value in this Array-:"<<res;
}