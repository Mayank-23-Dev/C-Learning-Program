#include <iostream>
using namespace std;

int main() 
{
    int n, i,j,key;
    cout << "Enter the Number of Elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter the Number: ";
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) 
    {
        key=a[i];
        for (int j = i-1; j>=0 && a[j]>key; j--) 
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    cout << "Sorted Array-:";
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << "\t";
    }
    return 0;
}
