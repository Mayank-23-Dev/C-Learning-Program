#include <iostream>
using namespace std;
int main()
{
    int sum=0,i,n;
    cout<<"Enter the value of N(For How many times you want to add the value)-:";
    cin>>n;
    for (i = 1; i <=n; i++)
    {
        sum+=(2*i-1);
    }
    cout<<"Sum of the first n odd number-:"<<sum;
}