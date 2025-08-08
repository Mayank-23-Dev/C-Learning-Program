#include <iostream>
using namespace std;
int min(int *p,int n)
{
    int min=*p,i;
    for ( i = 0; i < n; i++)
    {
        if (*(p+i)<min)
        {
            min=*(p+i);
        }
    }
    return min;
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
    res=min(p,n);
    cout<<"The Minimum Value in this Array-:"<<res;
}
    
    