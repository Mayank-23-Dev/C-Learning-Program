#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Value of n-:";
    cin>>n;
    int arr[n]; 
    for (int i=0;i<=n;i++)
    cin>>arr[i];
    int sum=0,y=arr[0];
    for (int j=0;j<=n;j++)
    {
        {
            if(y>arr[j])
            {
                y=y;
            }
            else
            {
                y=arr[j];
            }
        }
    }
    cout<<"The Largest Value All is "<<y;
}