#include <iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int n;
    int c;
    int sum;
    cout<<"Enter the nth Term-:";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(c=3;c<=n;c++)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<endl;
    }
}