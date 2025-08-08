#include <iostream>
using namespace std;
int main()
{
    int n,tar;
    cout<<"Enter the Size of The Array-:";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Element-:";
        cin>>arr[i];
    }
    cout<<"Enter the Target Value-:";
    cin>>tar;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==6)
            {
                cout<<"Sum of "<<arr[i]<<" and "<<arr[j]<<" is "<<tar<<endl;
            }
        }
    }
}