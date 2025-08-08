#include <iostream>
using namespace std;

int main() 
{
    int n, i,j,key;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) 
    {
        cout << "Enter the Number: ";
        cin >> a[i];
    }
    for (i = 0; i < n ; i++) 
    {
        key=a[i];
        for (j = i-1; j>=0 && a[j]>key; j--) 
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    cout << "Sorted Array-:";
   // cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4];
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
}
