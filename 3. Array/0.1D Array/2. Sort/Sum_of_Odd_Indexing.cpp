#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int sum=0;
    for (int i=0;i<=5;i++)
    {
        if (i%2!=0)
        {
            sum=sum+arr[i];
        }
    }
    cout<<sum;
}