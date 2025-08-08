#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int sum=0,y;
    for (int i=0;i<=5;i++)
    {
        y=arr[i]*arr[i];
        sum=sum+y;
    }
    cout<<sum;
}