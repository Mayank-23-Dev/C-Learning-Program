#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter the Number: ";
        cin >> arr[i];
    }
    int d;
    cout<<"Enter the Number which You want to Delete-:";
    cin>>d;
    int pos=-1;
    for (int i=0; i <n; i++)
    {
        if (arr[i]==d)
        {
            pos=i;
        }
    }
    if (pos==-1)
    {
        cout<<"Element Not Found.";
    }
    else
    {
    for (int i=pos; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;  
    for (int i=0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    }

}
