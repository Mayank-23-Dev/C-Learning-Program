#include <iostream>
using namespace std;
int main()
{
    int sum=0,s,i,n,p=1;
    cout<<"Enter the value of N(For How many times you want to add the value)-:";
    cin>>n;
    for (i = 1; i <=n; i++)
    {
        p=1;
        for (s=1;s<=i;s++)
        {
            p=p*i;
        }
        
        sum=sum+p;
    }
    cout<<"The Final Result of this Series will be -:"<<sum;
}