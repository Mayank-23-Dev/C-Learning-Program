#include <iostream>
using namespace std;
int main()
{
    int sum=1,i,n;
    cout<<"Enter the value of N(For How many times you want to add the value)-:";
    cin>>n;
    for (i = 1; i <=n-1; i++)
    {
        sum+=(5*i);
    }
    cout<<"Sum of the first n odd number-:"<<sum;
}