#include <iostream>
using namespace std;
int main()
{
    int sum=0,sum1=0,i,n;
    cout<<"Enter the value of N(For How many times you want to add the value)-:";
    cin>>n;
    for (i = 1; i <=(n+1)/2; i++)
    {
        sum=sum+(2*i)-1;
    }
    for (i = 1; i <=n/2; i++)
    {
        sum1=sum1+((2*i)*(2*i));
    }
    cout<<"The Final Result of this Series will be -:"<<sum+sum1;
}