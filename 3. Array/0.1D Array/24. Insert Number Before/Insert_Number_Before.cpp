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
    cout<<"Enter the Number before which You want to insert-:";
    cin>>d;
    int e;
    cout<<"Enter the Number which you want to Insert-:";
    cin>>e;
    int pos=-1;
    for (int i=0; i<n; i++)
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
        n++;
        for (int i=n; i>=pos; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=e;
        for (int i=0; i <n; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
