#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Elements-:";
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cout<<"Enter the Number-:";
        cin>>arr[i];
    }
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
}