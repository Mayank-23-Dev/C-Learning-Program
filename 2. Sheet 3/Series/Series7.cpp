#include <iostream>
using namespace std;
int main()
{
    int sum=0,s,i,n,p=1,fact=1,sum1=0,p1=1;
    cout<<"Enter the value of N(For How many times you want to add the value)-:";
    cin>>n;
    for (i = 1; i <=n; i++)
    {
        p=1;
        for (s=1;s<=i;s++)
        {
        if (s%2==0)
        {
            p=p*i; 
        }
        else if (s%2!=0)
        {
            p1=p1*i;
        }
        }
        sum=sum+p; 
        sum1=sum1+p1;
    }
    cout<<"The Final Result of this Series will be -:"<<sum-sum1;
}