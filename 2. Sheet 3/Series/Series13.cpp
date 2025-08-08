#include <iostream>
using namespace std;
int main()
{
    double a,n,i,j,sum=0,finalsum=0;
    cout<<"Enter the Value of n-:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }
        a=1/sum;
        sum=0;
        finalsum=finalsum+a;
    }
    cout<<finalsum;
}