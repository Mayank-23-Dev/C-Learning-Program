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
    int y=arr[0],x=arr[0];
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
    cout<<"The Largest Value All is "<<y<<endl;
    for (int j=0;j<=n;j++)
    {
        {
            if (arr[j]==y)
            {
                x=x;
                
            }
            else
            {
                if(arr[j]>x)
                x=arr[j];
            }
            
        }
    }
    cout<<"Second Largest Value is "<<x;
}